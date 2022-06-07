/*
** EPITECH PROJECT, 2022
** B-PSU-210-NCY-2-1-minishell2-martin.camara
** File description:
** fill_list
*/

#include "../includes/all.h"

env_t *add_in_list(env_t *list, char *key, char *data)
{
    env_t *element = malloc(sizeof(env_t));
    element->key = key;
    element->data = data;
    element->next = list;
    return (element);
}

env_t *mreverse_list(env_t *start)
{
    env_t *ll = start;
    env_t *rr = NULL;
    env_t *pp;

    while (ll) {
        pp = ll;
        ll = ll->next;
        pp->next = rr;
        rr = pp;
    }
    return (rr);
}

env_t *fill_environnement(char **ct)
{
    env_t *env = NULL;
    for (int a = 0; ct[a]; a++)
        env = add_in_list(env, get_key(ct[a]), get_data(ct[a]));
    return (mreverse_list(env));
}
