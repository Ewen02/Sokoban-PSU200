/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "my_src.h"

static int check_input(int ac, char **av)
{
    int fd;
    char buffer[1934];

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        fd = open("assets/header.txt", O_RDONLY);
        while (read(fd, buffer, 1) != 0)
            write(1, buffer, 1);
        return EXIT_SUCCESS;
    }
    if (ac > 2 || ac == 1) {
        my_printf("make ./my_sokoban -h\n");
        return EXIT_ERROR;
    }
    return EXIT_ERROR;
}

int main(int ac, char **av)
{
    if (check_input(ac, av) == 0)
        return EXIT_SUCCESS;
    if (file_pathe(av[1]) == 84)
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}