/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** mparse
*/

#include "../includes/all.h"

void parse_commands(all_t *all)
{
    int a = 0;

    if (counting(all->commands, ";") > 0) {
        looking_for_dots(all);
        a = 1;
        return;
    } if (counting(all->commands, "|") > 0) {
        looking_for_pipes(all);
        a = 1;
        return;
    } if (counting(all->commands, "><") > 0) {
        looking_for_cones(all);
        a = 1;
        return;
    } if (!a)
        analyse_commands(all, all->commands);
    return;
}
