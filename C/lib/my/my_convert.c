/*
** EPITECH PROJECT, 2025
** lib
** File description:
** confertion related func
*/

#include "my.h"

char *uint_str(unsigned int nbr)
{
    int len = my_intlen(nbr);
    char tmp[len + 1];
    char *num = malloc(sizeof(char) * len + 1);

    if (num == NULL)
        return NULL;
    for (int i = 0; i < len; i++) {
        tmp[i] = (nbr % 10) + '0';
        nbr /= 10;
    }
    tmp[len] = '\0';
    my_revstr(num, tmp);
    return num;
}
