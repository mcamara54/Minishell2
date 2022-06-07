/*
** EPITECH PROJECT, 2022
** ms2
** File description:
** pipes
*/

#include "../includes/all.h"

static void pipe1(all_t *all, char *cs, pid_t f)
{
    if (f == 0) {
        dup2(all->fd[1], 1);
        close(all->fd[0]);
        analyse_commands(all, cs);
        exit(1);
    } else {
        close(all->fd[1]);
        all->stock = all->fd[0];
    }
}

static void pipe2(all_t *all, char *cs, pid_t f)
{
    if (f == 0) {
        dup2(all->stock, 0);
        dup2(all->fd[1], 1);
        close(all->fd[0]);
        analyse_commands(all, cs);
        exit(1);
    } else {
        close(all->stock);
        close(all->fd[1]);
        all->stock = all->fd[0];
    }
}

static void pipe3(all_t *all, char *cs, pid_t f)
{
    if (f == 0) {
        dup2(all->fd[0], 0);
        close(all->stock);
        close(all->fd[1]);
        analyse_commands(all, cs);
        exit(1);
    } else {
        close(all->stock);
        close(all->fd[0]);
        close(all->fd[1]);
    }
}

void execute(all_t *all, char *cs, int a)
{
    if (a < last_line(all->tmp) - 1) pipe(all->fd);
    pid_t f = 0;
    f = fork();
    (a == 0 ? pipe1(all, cs, f) : a == last_line(all->tmp) - 1 ?
    pipe3(all, cs, f) : pipe2(all, cs, f));
}

void check_return(all_t *all)
{
    int st = 0;
    for (int a = last_line(all->tmp); a != -1 ; a--) {
        waitpid(all->tab[a], &st, 0);
        segv_and_floatings(all->tab[a]);
    }
}
