/*
** EPITECH PROJECT, 2024
** lib
** File description:
** manipulation and convertion of str
*/

#include "my.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

void my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}

int my_strcmp(char *s1, char *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);
    int x = 0;

    if (len1 != len2)
        return (len1 - len2);
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
        x += ((int)s1[i] - (int)s2[i]);
    return x;
}

static int capitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 'z' && str[i] >= 'a')
            str[i] -= 32;
    }
    return 0;
}

static int lowerize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] += 32;
    }
    return 0;
}

int my_capchg(char *str, char act)
{
    if (act == 'c')
        return capitalize(str);
    if (act == 'l')
        return lowerize(str);
    my_perror("wrong action specifier");
    return 1;
}

int str_int(char *str)
{
    int val = -1;

    if (str[0] <= '9' && str[0] >= '0')
        val = 0;
    else
        return val;
    for (int i = 0; str[i] <= '9' && str[i] >= '0' && str[i] != '\0'; i++) {
        val *= 10;
        val += ((int)str[i] - 48);
    }
    return val;
}
