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

void move_left(player_t *player)
{
    for (unsigned int i = 0; player->tab[i] != NULL; i++) {
        for (unsigned int j = 0; player->tab[i][j] != '\0'; j++) {
            if (player->tab[i][j] == 'P' && player->tab[i][j - 1] != '#'
                    && player->tab[i][j - 1] != 'O') {
                if (player->tab[i][j - 1] == 'X'
                    && player->tab[i][j - 2] != ' ')
                    return;
                else if (player->tab[i][j - 1] == 'X') {
                    player->tab[i][j] = ' ';
                    player->tab[i][j - 1] = 'P';
                    player->tab[i][j - 2] = 'X';
                }
                else {
                    player->tab[i][j] = ' ';
                    player->tab[i][j - 1] = 'P';
                }
                return;
            }
        }
    }
}

void move_right(player_t *player)
{
    for (unsigned int i = 0; player->tab[i] != NULL; i++) {
        for (unsigned int j = 0; player->tab[i][j] != '\0'; j++) {
            if (player->tab[i][j] == 'P' && player->tab[i][j + 1] != '#'
                && player->tab[i][j + 1] != 'O') {
                if (player->tab[i][j + 1] == 'X'
                    && player->tab[i][j + 2] != ' ')
                    return;
                else if (player->tab[i][j + 1] == 'X') {
                    player->tab[i][j] = ' ';
                    player->tab[i][j + 1] = 'P';
                    player->tab[i][j + 2] = 'X';
                }
                else {
                    player->tab[i][j] = ' ';
                    player->tab[i][j + 1] = 'P';
                }
                return;
            }
        }
    }
}