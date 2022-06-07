/*
** EPITECH PROJECT, 2022
** B-PSU-210-NCY-2-1-minishell2-martin.camara
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
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

int matoi(char const *a);

int misnum(char *s);

void mputchar(char c);

void mputnbr(int a);

void mputs(char const *str, int i);

char *mstrcat(char *a, char const *b);

int mstrcmp(char const *a, char const *b);

int mnstrcmp(char const *a, char const *b, int n);

char *mstrcpy(char *a, char const *b);

int mstrlen(char const *s);

char *clean_cs(char *cs, char del);

int nothing_after(char *s, char *del, int a);

char *remove_line(char *s, char del);

char **word_array(char *s, char *del);

int parse_caractere(char c, char *del);

char *remove_extra(char *s, char *del);

#endif /* !MY_H_ */
