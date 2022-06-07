/*
** EPITECH PROJECT, 2021
** B-CPE-101-NCY-1-1-evalexpr-martin.camara
** File description:
** my_put_nbr
*/

#include "../includes/my.h"

void mputnbr(int a)
{
    int b = a;
    int i = 0;
    while (b > 0) {b /= 10, i++;}
    char *s = malloc(sizeof(char) * (i + 1));
    s[i] = '\0';
    for (i -= 1; i >= 0; i--) {
        s[i] = a % 10 + '0';
        a /= 10;
    }
    mputs(s, 1);
    free(s);
}
