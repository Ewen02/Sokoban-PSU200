/*
** EPITECH PROJECT, 2021
** bootstrap sokban
** File description:
** //
*/

#include "my_src.h"

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
            return EXIT_SUCCESS;
        }
    }
    endwin();
}