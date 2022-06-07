/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** b_unsetenv
*/

#include "../includes/all.h"

void munsetenv(all_t *all)
{
    if (!all->ct[1]) {
        mputs("unsetenv: Too few arguments.", 1);
        return;
    }
    for (int a = 1; all->ct[a]; a++) {
        int i = find_pos(all->list, all->ct[a]);
        if (i != -1)
            all->list = remove_at(all->list, i);
    }
}
