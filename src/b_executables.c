/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** b_executables
*/

#include "../includes/all.h"

void mexecutable(all_t *all)
{
    execute_command(all->env, all->ct, all->ct[0]);
}
