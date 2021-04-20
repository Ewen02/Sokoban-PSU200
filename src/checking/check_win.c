/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "../../include/my_src.h"

static int count(player_t *player, uint i, uint j)
{
    int count = 0;

    if (player->tab[i][j] == 'O')
        count++;
    return count;
}

int check_win(player_t *player)
{
    int counter = 0;

    for (uint i = 0; player->tab[i] != NULL; i++)
        for (uint j = 0; player->tab[i][j] != '\0'; j++)
            counter = count(player, i, j);
    if (counter == 0)
        return EXIT_SUCCESS;
    return EXIT_ERROR;
}