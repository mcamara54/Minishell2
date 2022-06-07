/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** b_setenv
*/

#include "../includes/all.h"

void msetenv(all_t *all)
{
    for (int a = 0; all->ct[a]; a++) printf("%s\n", all->ct[a]);
    printf("ct[1] %s.%d\nct[2] %s.%d\n", all->ct[1], sizeof(all->ct[1]), all->ct[2], sizeof(all->ct[2]));
    if (all->ct[1] == NULL) {
        mshowlist(all->list);
        return;
    } else if (last_line(all->ct) > 3)
        mputs("setenv: Too many arguments.", 1);
    else
        all->list = replace_data(all->list, all->ct[1], all->ct[2]);
}
