/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** free_everything
*/

#include "../includes/all.h"

void free_everything(all_t *all)
{
    free(all->commands);
    for (int a = 0; all->ct[a]; a++) free(all->ct[a]);
    free(all->ct);
}
