/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "my_src.h"

static void check(player_t *player, uint i, uint j)
{
    if (player->map[i][j] == 'O' && player->tab[i][j] == ' ')
        player->tab[i][j] = 'O';
}

void check_2_map(player_t *player)
{
    for (uint i = 0; player->map[i]; i++)
        for (uint j = 0; player->map[i][j]; j++)
            check(player, i, j);
}