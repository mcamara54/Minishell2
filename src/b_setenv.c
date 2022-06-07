/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** b_setenv
*/

#include "../includes/all.h"

void msetenv(all_t *all)
{
    if (!all->ct[1]) {
        mshowlist(all->list);
        return;
    } else if (last_line(all->ct) > 3)
        mputs("setenv: Too many arguments.", 1);
    else
        all->list = replace_data(all->list, all->ct[1], all->ct[2]);
}
