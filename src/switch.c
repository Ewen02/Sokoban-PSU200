/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "../include/my_str.h"
#include "../include/my_utils.h"
#include "../include/my_src.h"
#include "../include/my_printf.h"
#include <ncurses.h>

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
            break;
        default:
            break;
        }
}