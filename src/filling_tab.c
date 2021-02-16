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

char **filling_tab(char *buffer)
{
    char **tab = NULL;
    int count_tab = 1;
    int size = 0, count = 0;

    for (int i = 0; buffer[i] != '\0'; i++, size++);
    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '\n')
            count_tab++;
    tab = malloc(sizeof(char *) * (size + 1));
    for (int i = 0, j = 0; i < count_tab; i++) {
            if (buffer[count] == '\n')
                j = 0, buffer += 1;
        tab[i] = malloc(sizeof(char) * (size + 1));
        for (j = 0; buffer[count] != '\n' && buffer[count] != '\0'; j++) {
            tab[i][j] = buffer[count];
            tab[i][j + 1] = '\0';
            count++;
        }
    }
    my_printf("%t", tab);
    return tab;
}