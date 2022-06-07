/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** looking_for
*/

#include "../includes/all.h"

void looking_for_pipes(all_t *all)
{
    int fd[2]; all->fd = fd; all->stock = 0;
    char **tab_cmd = word_array(all->commands, "|");
    all->tab = malloc(sizeof(int) * (last_line(tab_cmd) + 1));
    all->tmp = tab_cmd;
    for (int a = 0; a != last_line(tab_cmd) + 1; a++) all->tab[a] = -1;
    for (int a = 0; tab_cmd[a]; a++) execute(all, tab_cmd[a], a);
    check_return(all);
    for (int a = 0; tab_cmd[a]; a++) free(all->tmp[a]);
    free(all->tmp);
}

void looking_for_dots(all_t *all)
{
    char **tab_cmd = word_array(all->commands, ";");
    for (int a = 0; tab_cmd[a]; a++)
        (counting(tab_cmd[a], "|") > 0 ? looking_for_pipes(all) :
        analyse_commands(all, tab_cmd[a]));
}

void looking_for_cones(all_t *all)
{
    int a = 0;
    for (char **tab_cmd = word_array(all->commands, ";"); tab_cmd[a]; a++) {
        if (counting(all->commands, "|"))
            looking_for_pipes(all);
        else
            analyse_commands(all, tab_cmd[a]);
    }
}
