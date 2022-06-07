/*
** EPITECH PROJECT, 2022
** newlib
** File description:
** strcat
*/

#include "../includes/my.h"

char *mstrcat(char *a, char const *b)
{
    char *s = malloc(sizeof(char) * (mstrlen(a) + mstrlen(b) + 1));
    int i = 0;
    for (; a[i]; i++) s[i] = a[i];
    for (int y = 0; b[y]; y++) s[i++] = b[y];
    s[i] = '\0';
    return (s);
}
