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

void refresh_map(player_t *player)
{
    check_2_map(player);
    for (int i = 0; player->tab[i]; i++)
        mvprintw(i, 0, player->tab[i]);
    refresh();
}