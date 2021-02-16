/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "../include/my_utils.h"
#include "../include/my_str.h"
#include "../include/my_printf.h"
#include "../include/my_src.h"

int check_input(int ac, char **av)
{
    int fd;
    char buffer[1934];

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        fd = open("assets/header.txt", O_RDONLY);
        while (read(fd, buffer, 1) != 0) {
            write(1, buffer, 1);
        }
        return 0;
    }
    if (ac > 2) {
        my_printf("make ./my_sokoban -h\n");
        return 84;
    }
    return 1;
}

int main(int ac, char **av)
{
    if (check_input(ac, av) == 0)
        return 0;
    if (file_pathe(av[1]) == 84)
        return 84;
    return 0;
}