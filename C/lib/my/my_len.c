/*
** EPITECH PROJECT, 2024
** my_nlen
** File description:
** get the len of a str starting from the given char
*/

#include "my.h"

int my_nlen(char *str, int x)
{
    int i;

    for (i = 0; str[x] != '\0'; i++)
        x++;
    return i;
}

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}
