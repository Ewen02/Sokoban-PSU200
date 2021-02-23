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
    initscr();
    int ch = 0;
    curs_set(0);
    keypad(stdscr, TRUE);
    while (1) {
        for (int i = 0; player->tab[i] != NULL; i++) {
            mvprintw(i, 0, player->tab[i]);
        }
        refresh();
        ch = getch();
        switch (ch) {
            case KEY_UP:
                move_up(player);
                // if (check_map(player) == 0);
                //     return 0;
                break;
            case KEY_DOWN:
                move_down(player);
                // if (check_map(player) == 0);
                //     return 0;
                break;
            case KEY_LEFT:
                move_left(player);
                // if (check_map(player) == 0);
                //     return 0;
                break;
            case KEY_RIGHT:
                move_right(player);
                // if (check_map(player) == 0);
                //     return 0;
                break;
            default:
                break;
            }
    }
    endwin();
}