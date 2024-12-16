/*
** EPITECH PROJECT, 2024
** lib
** File description:
** verifing str info
*/

#include "my.h"

int is_cap(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 'Z' || str[i] < 'A')
            return 1;
    }
    return 0;
}

int is_low(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 'z' || str[i] < 'a')
            return 1;
    }
    return 0;
}

int ver_type(char *str)
{
    if (my_strcmp("ACTUATOR", str) == 0 ||
    my_strcmp("DEVICE", str) == 0 || my_strcmp("PROCESSOR", str) == 0 ||
    my_strcmp("SENSOR", str) == 0 || my_strcmp("WIRE", str) == 0)
        return 0;
    return 1;
}

int is_int(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > '9' && str[i] < '0')
            return 1;
    }
    return 0;
}
