/*
** EPITECH PROJECT, 2024
** lib
** File description:
** getting len of things
*/

#include "my.h"

int arr_len(char **arr)
{
    int x = 0;

    for (; arr[x] != NULL; x++);
    return x;
}
