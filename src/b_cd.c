/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** b_cd
*/

#include "../includes/all.h"

static char *way_to_home(char *s)
{
    char *cs = NULL;
    int n = 0;
    int b = 1;

    for (int a = 0; s[a]; a++)
        if (s[a] == '/') n++;
    if (n >= 1) {
        cs = mstrcpy(cs, "../");
        b++;
    }
    while (b < n - 1) {
        cs = mstrcat(cs, "../");
        b++;
    }
    return (cs);
}

static void cd_to_last_position(all_t *all, char *pw)
{
    if (!all->old)
        mputs(": No such file or directory.", 1);
    chdir(all->old);
    all->old = mstrcpy(all->old, pw);
}

static void cd_to_home(all_t *all, char *pw)
{
    if (all->ct[1] && all->ct[2])
        mputs("cd: Too many arguments.", 1);
    all->old = mstrcpy(all->old, pw);
    chdir(way_to_home(path_pwd(all->list)));
}

static void simple_cd(all_t *all, char *pw)
{
    if (all->ct[2])
        mputs("cd: Too many arguments.", 1);
    all->old = mstrcpy(all->old, pw);
    if (chdir(all->ct[1]) == -1) {
        mputs(all->ct[1], 0);
        mputs(": No such file or directory.", 1);
    }
}

void mcd(all_t *all)
{
    char pw[1024];
    getcwd(pw, sizeof(pw));
    void (*p[]) (all_t *, char *) = {cd_to_last_position, cd_to_home,
    simple_cd};
    (mnstrcmp(all->ct[1], "-", 1) && !all->ct[2] ? p[0](all, pw) :
    mnstrcmp(all->ct[1], "~", 1) || !all->ct[1] ? p[1](all, pw) :
    p[2](all, pw));
}
