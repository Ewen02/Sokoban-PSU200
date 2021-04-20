/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "my_src.h"

static int move_right(player_t *player, uint i, uint j)
{
    if (player->tab[i][j] == 'P' && player->tab[i][j + 1] != '#') {
        if (player->tab[i][j + 1] == 'X' && player->tab[i][j + 2] == 'O') {
            player->tab[i][j] = ' ';
            player->tab[i][j + 1] = 'P';
            player->tab[i][j + 2] = 'X'; }
        if (player->tab[i][j + 1] == 'X' && player->tab[i][j + 2] != ' ')
            return EXIT_ERROR;
        if (player->tab[i][j + 1] == 'X') {
            player->tab[i][j] = ' ';
            player->tab[i][j + 1] = 'P';
            player->tab[i][j + 2] = 'X';
        }
        else {
            player->tab[i][j] = ' ';
            player->tab[i][j + 1] = 'P'; }
        return EXIT_ERROR;
    }
    return EXIT_SUCCESS;
}

void parcing_map_r(player_t *player)
{
    bool stop = 0;

    for (uint i = 0; player->tab[i] != NULL && !stop; i++) {
        for (uint j = 0; player->tab[i][j] != '\0' && !stop; j++)
            stop = move_right(player, i, j);
    }
}