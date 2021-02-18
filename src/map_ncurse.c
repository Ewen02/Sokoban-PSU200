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

void map_ncurse(player_t *player)
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
                break;
            case KEY_DOWN:
                move_down(player);
                break;
            case KEY_LEFT:
                move_left(player);
                break;
            case KEY_RIGHT:
                move_right(player);
                break;
            default:
                break;
            }
    }
    endwin();
}