/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** find_pwd
*/

#include "../includes/all.h"

char *path_pwd(env_t *list)
{
    env_t *elem = list;
    while (elem) {
        if (mstrcmp(elem->key, "PWD"))
            return (elem->data);
        elem = elem->next;
    }
    return ("Didn't find it\n");
}
