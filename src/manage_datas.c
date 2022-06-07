/*
** EPITECH PROJECT, 2022
** B-PSU-210-NCY-2-1-minishell2-martin.camara
** File description:
** manage_datas
*/

#include "../includes/all.h"

env_t *ccell(char *key, char *data)
{
    env_t *cell = malloc(sizeof(env_t));
    if (!cell)
        return (cell);
    cell->key = key;
    cell->data = data;
    cell->next = NULL;
    return (cell);
}

env_t *add_at(env_t *list, char *key, char *data, int pos)
{
    env_t *past = list;
    env_t *current = list;
    env_t *cell = ccell(key, data);
    int i = 0;
    if (pos == 0) {
        cell->next = list;
        return (cell);
    }
    while (i < pos) {
        i++;
        past = current;
        current = current->next;
    }
    past->next = cell;
    cell->next = current;
    return (list);
}

env_t *replace_data(env_t *list, char *key, char *data)
{
    env_t *tmp = list;
    int pos = 0;
    while (list) {
        if (mstrcmp(list->key, key)) {
            list->data = data;
            return (tmp);
        }
        pos++;
        list = list->next;
    }
    return (add_at(tmp, key, data, pos));
}

env_t *remove_at(env_t *list, int pos)
{
    env_t *past = list;
    env_t *current = list;
    int i = 0;
    if (pos == 0) {
        list = list->next;
        free(current);
        return (list);
    }
    while (i < pos) {
        i++;
        past = current;
        current = current->next;
    }
    past->next = current->next;
    free(current);
    return (list);
}
