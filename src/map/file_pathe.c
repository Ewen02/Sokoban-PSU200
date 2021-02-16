/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "../include/my_str.h"
#include "../include/my_utils.h"
#include "../include/my_src.h"
#include "../include/my_printf.h"
#include <ncurses.h>

int file_pathe(char const *str)
{
    int fd = open(str, O_RDONLY);
    if (fd <= -1)
        return 84;
    char *buffer;
    struct stat ft;
    if (stat(str, &ft) == -1) {
        close(fd);
        return 84;
    }
    buffer = malloc(sizeof(char) * (ft.st_size + 1));
    if (read(fd, buffer, ft.st_size) == -1)
        return 84;
    buffer[ft.st_size] = '\0';
    close(fd);
    filling_tab(buffer);
}