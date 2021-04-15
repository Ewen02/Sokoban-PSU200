/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "my_src.h"

int filling_tab(char *buffer, char letter)
{
    player_t player = {0};
    int count_tab = 1, size = 0, count = 0;

    for (int i = 0; buffer[i] != '\0'; i++, size++);
    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == letter)
            count_tab++;
    player.tab = malloc(sizeof(char *) * (size + 1));
    for (int i = 0, j = 0; i < count_tab; i++) {
        if (buffer[count] == letter)
            j = 0, buffer += 1;
        player.tab[i] = malloc(sizeof(char) * (size + 1));
        for (j = 0; buffer[count] != letter && buffer[count] != '\0'; j++) {
            player.tab[i][j] = buffer[count];
            player.tab[i][j + 1] = '\0';
            count++;
        }
    }
    map_ncurse(&player);
}