/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** usefull
*/

#include "../includes/all.h"

int get_arguments(char c, char *del)
{
    for (int a = 0; del[a]; a++)
        if (c == del[a]) return (1);
    return (0);
}

int counting(char *cs, char *del)
{
    int n = 0;
    for (int a = 0; cs[a]; a++)
        if (get_arguments(cs[a], del)) n++;
    return (n);
}
