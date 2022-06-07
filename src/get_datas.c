/*
** EPITECH PROJECT, 2022
** B-PSU-210-NCY-2-1-minishell2-martin.camara
** File description:
** get_datas
*/

#include "../includes/all.h"

char *get_key(char *str)
{
    int i = 0;
    for (; str[i] != '=' && str[i] != '\0'; i++);
    char *key = malloc(sizeof(char) * (i + 1));
    for (i = 0; str[i] != '=' && str[i] != '\0'; i++)
        key[i] = str[i];
    key[i] = '\0';
    return (key);
}

char *get_data(char *str)
{
    int i;
    for (i = 0; str[i] != '=' && str[i] != '\0'; i++);
    i++;
    int e = 0;
    for (int a = i; str[a]; a++, e++);
    char *data = malloc(sizeof(char) * (e + 1));
    for (e = 0; str[i]; i++, e++)
        data[e] = str[i];
    data[e] = '\0';
    return (data);
}
