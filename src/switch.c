/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "my_src.h"

void my_switc(player_t *player, int ch)
{
    switch (ch) {

        case KEY_UP:
            parcing_map_u(player);
            break;
        case KEY_DOWN:
            parcing_map_d(player);
            break;
        case KEY_LEFT:
            parcing_map_l(player);
            break;
        case KEY_RIGHT:
            parcing_map_r(player);
        }
}