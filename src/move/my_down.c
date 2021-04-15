/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "my_src.h"

static int move_down(player_t *player, uint i, uint j)
{
    if (player->tab[i][j] == 'P' && player->tab[i + 1][j] != '#'
    && player->tab[i + 1][j] != 'O') {
        if (player->tab[i + 1][j] == 'X'
        && player->tab[i + 2][j] == 'O') {
            player->tab[i][j] = ' ';
            player->tab[i + 1][j] = 'P';
            player->tab[i + 2][j] = 'X'; }
        if (player->tab[i + 1][j] == 'X'
        && player->tab[i + 2][j] != ' ')
            return 1;
        if (player->tab[i + 1][j] == 'X') {
            player->tab[i][j] = ' ';
            player->tab[i + 1][j] = 'P';
            player->tab[i + 2][j] = 'X';
        }
        else {
            player->tab[i][j] = ' ';
            player->tab[i + 1][j] = 'P'; }
        return EXIT_ERROR;
    }
    return EXIT_SUCCESS;
}

void parcing_map_d(player_t *player)
{
    bool stop = 0;

    for (uint i = 0; player->tab[i] != NULL && !stop; i++) {
        for (uint j = 0; player->tab[i][j] != '\0' && !stop; j++) {
            stop = move_down(player, i, j);
        }
    }
}