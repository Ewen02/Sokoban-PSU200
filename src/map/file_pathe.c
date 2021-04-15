/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "../../include/my_str.h"
#include "../../include/my_utils.h"
#include "../../include/my_src.h"
#include "../../include/my_printf.h"
#include <ncurses.h>

int file_pathe(char const *str)
{
    int fd = open(str, O_RDONLY);
    char *buffer;
    struct stat ft;

    if (fd <= -1)
        return EXIT_FAILURE;
    if (stat(str, &ft) == -1) {
        close(fd);
        return EXIT_FAILURE;
    }
    buffer = malloc(sizeof(char) * (ft.st_size + 1));
    if (read(fd, buffer, ft.st_size) == -1)
        return EXIT_FAILURE;
    buffer[ft.st_size] = '\0';
    close(fd);
    filling_tab(buffer, '\n');
}