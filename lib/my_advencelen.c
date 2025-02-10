/*
** EPITECH PROJECT, 2025
** lib
** File description:
** other len function
*/

#include "my.h"

int my_strclen(char *str, char bound, int start)
{
    int i = 0;

    for (; str[start + i] != bound && str[start + i] != '\0' &&
        str[start + i] != '\t'; i++);
    return i;
}

int my_intlen(int nbr)
{
    int i = 0;

    for (; nbr != 0; i++)
        nbr /= 10;
    return i;
}
