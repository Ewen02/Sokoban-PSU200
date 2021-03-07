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

int map_ncurse(player_t *player)
{
    int ch = 0;
    initscr();
    curs_set(0);
    keypad(stdscr, TRUE);

    while (1) {
        refresh_map(player);
        ch = getch();
        my_switc(player, ch);
        if (check_win(player) == 0) {
            refresh_map(player);
            return 0;
        }
    }
    endwin();
}