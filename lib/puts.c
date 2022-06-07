/*
** EPITECH PROJECT, 2021
** B-CPE-101-NCY-1-1-evalexpr-martin.camara
** File description:
** my_putstr
*/

#include "../includes/all.h"

void mputs(char const *str, int i)
{
    while (*str) write(1, str++, 1);
    if (i == 1) write(1, "\n", 1);
}
