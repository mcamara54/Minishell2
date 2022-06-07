/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** main
*/

#include "../includes/all.h"

int main(int ac, char **av, char **env)
{
    all_t *all = malloc(sizeof(all_t));
    all->env = env;
    all->old = NULL;
    all->list = fill_environnement(all->env);
    signal(SIGTSTP, SIG_IGN), signal(SIGINT, SIG_IGN);
    minishell_loop(all);
    return (0);
}
