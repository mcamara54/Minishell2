/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** nstrcmp
*/

#include "../includes/my.h"

int mnstrcmp(char const *a, char const *b, int n)
{
    int i = 0;

    if (!a && !b)
        return (1);
    if ((!b && a) || (b && !a))
        return (0);
    while (a[i] && i != n) {
        if (a[i] != b[i]) return (0);
        i++;
    }
    return (1);
}
