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
#include <stdbool.h>

static int move_right(player_t *player, unsigned int i, unsigned int j)
{
    if (player->tab[i][j] == 'P' && player->tab[i][j + 1] != '#'
    && player->tab[i][j + 1] != 'O') {
        if (player->tab[i][j + 1] == 'X'
        && player->tab[i][j + 2] == 'O') {
            player->tab[i][j] = ' ';
            player->tab[i][j + 1] = 'P';
            player->tab[i][j + 2] = 'X'; }
        if (player->tab[i][j + 1] == 'X'
        && player->tab[i][j + 2] != ' ')
            return 1;
        if (player->tab[i][j + 1] == 'X') {
            player->tab[i][j] = ' ';
            player->tab[i][j + 1] = 'P';
            player->tab[i][j + 2] = 'X';
        }
        else {
            player->tab[i][j] = ' ';
            player->tab[i][j + 1] = 'P'; }
        return 1;
    }
    return 0;
}

void parcing_map_r(player_t *player)
{
    bool stop = 0;

    for (unsigned int i = 0; player->tab[i] != NULL && !stop; i++) {
        for (unsigned int j = 0; player->tab[i][j] != '\0' && !stop; j++)
            stop = move_right(player, i, j);
    }
}