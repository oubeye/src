/*
** EPITECH PROJECT, 2024
** lib
** File description:
** finding values about str
*/

#include "my.h"

int asciival(char *str)
{
    int val = 0;

    for (int i = 0; str[i] != '\0'; i++)
        val += (int)str[i];
    return val;
}
