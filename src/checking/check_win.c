/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "../../include/my_src.h"

int check_win(player_t *player)
{
    int counter = 0;

    for (int i = 0; player->tab[i] != NULL; i++)
        for (int j = 0; player->tab[i][j] != '\0'; j++)
            if (player->tab[i][j] == 'O')
                counter++;
    if (counter == 0)
        return EXIT_SUCCESS;
    return EXIT_ERROR;
}