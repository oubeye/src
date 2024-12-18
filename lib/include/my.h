/*
** EPITECH PROJECT, 2024
** headers file for reg lib
** File description:
** header lib
*/

#ifndef MY_H
    #define MY_H
    #include <unistd.h>
    #include <fcntl.h>
int file_size(char *path);
int file_size_cut(char *path, char c);
int my_nlen(char *str, int x);
int my_strlen(char *str);
int my_perror(char *str);
int my_strcmp(char *s1, char *s2);
int my_capchg(char *str, char act);
int str_int(char *str);
int asciival(char *str);
int verif_strint(char *str);
int is_cap(char *str);
int is_low(char *str);
int is_int(char *str);

void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nbr);
void my_strcpy(char *dest, char *src);
#endif
