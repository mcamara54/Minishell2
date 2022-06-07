/*
** EPITECH PROJECT, 2022
** newlib
** File description:
** strlen
*/

#include "../includes/my.h"

int mstrlen(char const *s)
{
    int i = 0;
    while (*s) i++, *s++;
    return (i);
}
