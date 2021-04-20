/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "my_src.h"

static int count_o(player_t *player, uint i, uint j, int map_o)
{
    if (player->map[i][j] == 'O')
        map_o++;
    return map_o;
}

static int count_o2(player_t *player, uint i, uint j, int tab_o)
{
    if (player->tab[i][j] == 'O')
        tab_o++;
    return tab_o;
}

static int count_count(player_t *player, uint i, uint j, int count)
{
    if (player->map[i][j] == 'O' && player->tab[i][j] == 'X')
        count++;
    return count;
}

int check_win(player_t *player)
{
    int count = 0;
    int map_o = 0;
    int tab_o = 0;

    for (uint i = 0; player->tab[i]; i++) {
        for (uint j = 0; player->tab[i][j]; j++) {
            map_o = count_o(player, i, j, map_o);
            tab_o = count_o2(player, i, j, tab_o);
            count = count_count(player, i, j, count);
        }
    }
    if (count == map_o && tab_o == 0)
        return EXIT_SUCCESS;
    return EXIT_ERROR;
}