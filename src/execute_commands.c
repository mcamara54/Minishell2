/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** execute_commands
*/

#include "../includes/all.h"

void segv_and_floatings(int value)
{
    if (WIFSIGNALED(value) == 1) {
        if (WTERMSIG(value) == 11)
            mputs("Segmentation fault (core dumped)", 1);
        if (WTERMSIG(value) == 8)
            mputs("Floating exception (core dumped)", 1);
    }
}

void execute_command(char **env, char **commands, char *concted)
{
    pid_t f;
    f = fork();
    int value = 0;

    if (f == -1)
        exit (84);
    else if (!f)
        execve(concted, commands, env);
    else
        waitpid(f, &value, 0), segv_and_floatings(value);
}

void execution(all_t *all)
{
    char **ct = word_array(path_data(all->list), ":");
    char *concted = NULL;
    int acs = 0;

    for (int a = 0; ct[a]; ) {
        concted = mstrcat(ct[a], "/"), concted = mstrcat(concted, all->ct[0]);
        acs = access(concted, F_OK);
        if (!acs) {
            execute_command(all->env, all->ct, concted);
            break;
        } else
            a++;
        free(concted);
    }
    if (acs) mputs(all->ct[0], 0), mputs(": Command not found.", 1);
}
