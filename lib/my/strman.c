/*
** EPITECH PROJECT, 2025
** lib
** File description:
** str manipulation related function
*/

#include "my.h"

char *my_strcat(char *dest, char *src)
{
    int len = my_strlen(dest);
    int len_src = my_strlen(src);

    for (int i = 0; i < len_src; i++) {
        dest[len + i] = src[i];
    }
    dest[len + len_src] = '\0';
    return dest;
}
