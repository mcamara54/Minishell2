/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** add_in
*/

#include "../includes/all.h"

int *add_in_tab(int *it, int n, int b)
{
    if (b == 0) return (it);
    it[1] = n;
    return (it);
}
