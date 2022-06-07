/*
** EPITECH PROJECT, 2022
** B-PSU-200-NCY-2-1-tetris-romain.bolze
** File description:
** putchar
*/

#include "../includes/my.h"

void mputchar(char c)
{
    write(1, &c, 1);
}
