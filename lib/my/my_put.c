/*
** EPITECH PROJECT, 2024
** my_put
** File description:
** printing avery thing
*/

#include "my.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int my_perror(char *str)
{
    int len = 0;

    for (; str[len] != '\0'; len++);
    write(2, str, len);
    return 84;
}

void my_put_nbr(int nbr)
{
    int s;
    int e;

    if (nbr < 0) {
        nbr *= -1;
        my_putchar('-');
    }
    e = nbr % 10;
    s = nbr / 10;
    if (s != 0)
        my_put_nbr(s);
    my_putchar(e + '0');
}

void my_putarr(char **arr, char c)
{
    for (int i = 0; arr[i]; i++) {
        my_putchar((i > 0 ? c : '\0'));
        my_putstr(arr[i]);
    }
}
