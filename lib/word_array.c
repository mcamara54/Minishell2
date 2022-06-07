/*
** EPITECH PROJECT, 2022
** newlib
** File description:
** word_array
*/

#include "../includes/my.h"

int nothing_after(char *s, char *del, int a)
{
    for (; s[a]; a++)
        if (!parse_caractere(s[a], del)) return (0);
    return (1);
}

char **word_array(char *s, char *del)
{
    int word = 1;
    int a = 0;
    remove_extra(s, del);
    remove_line(s, ' ');
    for (; s[a]; a++) {
        if (parse_caractere(s[a], del) &&
        nothing_after(s, del, a) == 0) word++;
        for (; parse_caractere(s[a], del); a++);
    }
    char **ct = malloc(sizeof(char *) * (word + 1));
    for (int line = 0, nletter = 0, a = 0, b = 0; line < word; line++) {
        for (nletter = 0; !parse_caractere(s[a], del) && s[a]; a++, nletter++);
        ct[line] = malloc(sizeof(char) * (nletter + 1));
        printf("%d", sizeof(ct[line]));
        for (a -= nletter, b = 0; !parse_caractere(s[a], del) && s[a]; a++)
            ct[line][b++] = s[a];
        ct[line][b] = '\0';
        printf(" %s.\n", ct[line]);
        for (; parse_caractere(s[a], del); a++);
    }
    ct[word] = NULL;
    return (ct);
}
