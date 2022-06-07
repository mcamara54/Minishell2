/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** list
*/

#include "../includes/all.h"

int find_pos(env_t *list, char *key)
{
    int index = 0;
    while (list) {
        if (mstrcmp(list->key, key))
            return (index);
        index++;
        list = list->next;
    }
    return (-1);
}

char *path_data(env_t *list)
{
    env_t *elem = list;
    while (elem) {
        if (mstrcmp(elem->key, "PATH"))
            return (elem->data);
        elem = elem->next;
    }
    return ("Didn't find it");
}
