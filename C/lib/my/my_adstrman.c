/*
** EPITECH PROJECT, 2025
** lib
** File description:
** other str manipulation fonction
*/

#include "my.h"

void my_strseg_dup(char *dest, char *src, int start, int len)
{
    for (int i = 0; i < len; i++)
        dest[i] = src[start + i];
    dest[len] = '\0';
    return;
}

void freearr(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
}

void my_revstr(char *dest, char *src)
{
    int len = my_strlen(src) - 1;

    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[len - i];
    }
    dest[len + 1] = '\0';
}

int my_strncmp(char *s1, char *s2, int len, int start)
{
    int cmp = 0;

    for (int i = 0; i < len; i++) {
        cmp += (s1[i + start] - s2[i + start]);
    }
    return cmp;
}
