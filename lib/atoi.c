/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** file5
*/

#include "../includes/my.h"

int matoi(char const *a)
{
    int m = 0;
    int n = 0;
    while (*a) {
        (*a == '-' ? m++ : *a >= '0' && *a <= '9' ? n = *a - '0' + n * 10 : 0);
        *a++;
    }
    return (m % 2 == 1 ? n *= -1 : n);
}
