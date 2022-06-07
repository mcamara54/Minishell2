/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** analyse_commands
*/

#include "../includes/all.h"

void analyse_commands(all_t *all, char *cs)
{
    all->ct = word_array(cs, " ");
    char pw[1024];
    getcwd(pw, sizeof(pw));
    char const *commands[] = {"env", "setenv", "unsetenv", "cd", "exit"};
    void (*p[]) (all_t *) = {menv, msetenv, munsetenv, mcd,
    mexit, mexecutable};
    all->list = replace_data(all->list, "PWD", pw);
    if (mnstrcmp(all->ct[0], "./", 2)) {
        p[5](all);
        return;
    }
    for (int a = 0; a <= 4; a++) {
        if (mstrcmp(all->ct[0], commands[a])) {
            p[a](all);
            return;
        }
    }
    execution(all);
    return;
}
