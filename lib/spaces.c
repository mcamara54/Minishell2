/*
** EPITECH PROJECT, 2022
** lib
** File description:
** spaces
*/

#include "../includes/my.h"

int last_line(char **s)
{
    int a = 0;
    for (; s[a]; a++);
    return (a);
}

char *remove_line(char *s, char del)
{
    if (s[mstrlen(s) - 1] == del)
        s[mstrlen(s) - 1] = '\0';
    return (s);
}

int parse_caractere(char c, char *del)
{
    for (int a = 0; del[a]; a++) {
        if (c == del[a])
            return (1);
    }
    return (0);
}

char *remove_extra(char *s, char *del)
{
    int i = 0, x = 0;
    for (; s[i]; i++) {
        if (!parse_caractere(s[i], del) || (i > 0 &&
        !parse_caractere(s[i - 1], del)))
            s[x++] = s[i];
    }
    s[x] = '\0';
    return (s);
}
