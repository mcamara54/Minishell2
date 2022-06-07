/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** getline
*/

#include "../includes/all.h"

char *mgetline(all_t *all)
{
    size_t sz = 1;
    all->commands = malloc(sizeof(char) * sz);
    if (getline(&all->commands, &sz, stdin) == -1) mputs("exit", 1), exit(0);
    return (remove_line(remove_extra(all->commands, " \t\n"), '\n'));
}
