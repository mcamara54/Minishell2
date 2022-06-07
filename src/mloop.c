/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** mloop
*/

#include "../includes/all.h"

void minishell_loop(all_t *all)
{
    while (1) {
        mputs("~~~~> ", 0);
        mgetline(all);
        parse_commands(all);
        free(all->commands);
    }
}
