/*
** EPITECH PROJECT, 2024
** lib
** File description:
** getting size file
*/

#include "my.h"

int file_size(char *path)
{
    char buffer[30];
    int len = 0;
    int fd = open(path, O_RDONLY);

    for (int tmp = read(fd, buffer, 30); tmp != 0; tmp = read(fd, buffer, 30))
        len += tmp;
    close(fd);
    return len;
}

int file_size_cut(char *path, char c)
{
    int len = file_size(path);
    int fd = open(path, O_RDONLY);
    char buffer[len + 1];
    int i = 0;

    read(fd, buffer, len);
    buffer[len] = '\0';
    for (; buffer[i] != c && buffer[i] != '\0'; i++);
    close(fd);
    return i;
}
