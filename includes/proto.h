/*
** EPITECH PROJECT, 2022
** B-PSU-210-NCY-2-1-minishell2-martin.camara
** File description:
** proto
*/

#ifndef PROTO_H_
    #define PROTO_H_
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
    #include <sys/types.h>
    #include <sys/wait.h>

int last_line(char **s);
char *get_key(char *str);
char *get_data(char *str);
env_t *add_in_list(env_t *list, char *key, char *data);
env_t *mreverse_list(env_t *start);
env_t *fill_environnement(char **ct);
void mshowlist(env_t *list);
env_t *ccell(char *key, char *data);
env_t *add_at(env_t *list, char *key, char *data, int pos);
env_t *replace_data(env_t *list, char *key, char *data);
env_t *remove_at(env_t *list, int pos);
int find_pos(env_t *list, char *key);
char *path_data(env_t *list);
char *path_pwd(env_t *list);
char *mgetline(all_t *all);
int get_arguments(char c, char *del);
int counting(char *cs, char *del);
void menv(all_t *all);
void msetenv(all_t *all);
void munsetenv(all_t *all);
char *pwd(all_t *all);
void mcd(all_t *all);
void mexit(all_t *all);
void segv_and_floatings(int value);
void execute_command(char **env, char **commands, char *concted);
void mexecutable(all_t *all);
void execution(all_t *all);
void analyse_commands(all_t *all, char *cs);
void looking_for_pipes(all_t *all);
void looking_for_dots(all_t *all);
int *add_in_tab(int *it, int n, int b);
void execute(all_t *all, char *cs, int a);
void check_return(all_t *all);
void looking_for_cones(all_t *all);
void parse_commands(all_t *all);
void minishell_loop(all_t *all);

#endif /* !PROTO_H_ */
