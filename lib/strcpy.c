/*
** EPITECH PROJECT, 2022
** newlib
** File description:
** strcpy
*/

#include "../includes/my.h"

char *mstrcpy(char *a, char const *b)
{
    a = malloc(sizeof(char) * (mstrlen(b) + 1));
    int i = 0;
    for (; b[i]; i++) a[i] = b[i];
    a[i] = '\0';
    return (a);
}
