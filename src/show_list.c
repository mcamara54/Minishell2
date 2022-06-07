/*
** EPITECH PROJECT, 2022
** B-PSU-210-NCY-2-1-minishell2-martin.camara
** File description:
** show_list
*/

#include "../includes/all.h"

void mshowlist(env_t *list)
{
    env_t *current = list;
    while (current) {
        mputs(current->key, 0);
        mputs("=", 0);
        if (current->data)
            mputs(current->data, 1);
        else
            mputchar('\n');
        current = current->next;
    }
}
