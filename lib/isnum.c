/*
** EPITECH PROJECT, 2022
** newlib
** File description:
** isnum
*/

#include "../includes/my.h"

int misnum(char *s)
{
    while (*s) {
        if (*s >= '0' && *s <= '9')
            s++;
        else
            return (0);
    }
    return (1);
}
