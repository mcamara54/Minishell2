/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** b_exit
*/

#include "../includes/all.h"

void mexit(all_t *all)
{
    mputs("exit", 1);
    if (all->ct[1] == NULL)
        exit(0);
    if (all->ct[2] == NULL && misnum(all->ct[1]))
        exit (matoi(all->ct[1]));
    else
        mputs("exit: Expression Syntax.", 1);
}
