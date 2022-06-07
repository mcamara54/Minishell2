/*
** EPITECH PROJECT, 2022
** B-PSU-210-NCY-2-1-minishell2-martin.camara
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #include <stdarg.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <SFML/Graphics.h>
    #include <time.h>
    #include <ncurses.h>
    #include <dirent.h>
    #include <getopt.h>

struct env {
    char *key;
    char *data;
    struct env *next;
};
typedef struct env env_t;

struct all {
    char *commands;
    char **ct;
    char **env;
    char **tmp;
    char *path;
    int *fd;
    int *tab;
    int stock;
    char *old;
    env_t *list;
};
typedef struct all all_t;

#endif /* !STRUCT_H_ */
