/*
** EPITECH PROJECT, 2024
** headers file for reg lib
** File description:
** header lib
*/

#ifndef MY_H
    #define MY_H
    #include "gll.h"
    #include <unistd.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <string.h>
    #include <sys/wait.h>
//project
//lib
int my_intlen(int);
int my_nlen(char *str, int x);
int my_strlen(char *str);
int my_perror(char *str);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char *s1, char *s2, int len, int start);
int my_capchg(char *str, char act);
int str_int(char *str);
int asciival(char *str);
int verif_strint(char *str);
int is_cap(char *str);
int is_low(char *str);
int is_int(char *str);
int my_strclen(char *src, char c, int start);
int file_size(char *path);

char *uint_str(unsigned int);
char *my_strcat(char *dest, char *src);

char **str_arr(char *str, char c);

void my_revstr(char *dest, char *src);
void freearr(char **arr);
void my_strseg_dup(char *dest, char *src, int start, int len);
void my_putchar(char c);
void my_putstr(char *str);
void my_putarr(char **arr, char separator);
void my_put_nbr(int nbr);
void my_strcpy(char *dest, char *src);
#endif
