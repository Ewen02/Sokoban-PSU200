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

void move_up(player_t *player)
{
    for (unsigned int i = 0; player->tab[i] != NULL; i++) {
        for (unsigned int j = 0; player->tab[i][j] != '\0'; j++) {
            if (player->tab[i][j] == 'P' && player->tab[i - 1][j] != '#' && player->tab[i - 1][j] != 'O') {
                player->tab[i][j] = ' ';
                player->tab[i - 1][j] = 'P';
                return;
            }
        }
    }
}

void move_down(player_t *player)
{
    for (unsigned int i = 0; player->tab[i] != NULL; i++) {
        for (unsigned int j = 0; player->tab[i][j] != '\0'; j++) {
            if (player->tab[i][j] == 'P' && player->tab[i + 1][j] != '#' && player->tab[i + 1][j] != 'O') {
                player->tab[i][j] = ' ';
                player->tab[i + 1][j] = 'P';
                return;
            }
        }
    }
}