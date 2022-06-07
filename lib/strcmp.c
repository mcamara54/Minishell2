/*
** EPITECH PROJECT, 2022
** newlib
** File description:
** strcmp
*/

#include "../includes/my.h"

int mstrcmp(char const *a, char const *b)
{
    if (!a && !b)
        return (1);
    if ((!b && a) || (b && !a))
        return (0);
    return (*a == 0 && *b == 0 ? 1 : *a == *b ? mstrcmp(++a, ++b) : 0);
}
