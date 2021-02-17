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

void pos_P(player_t *player)
{
    for (int i = 0; player->tab[i] != NULL; i++) {
        for (int j = 0; player->tab[i][j] != '\0'; j++) {
            if (player->tab[i][j] == 'P')
                player->posX = i;
                player->posY = j;
        }
    }
    mvprintw(15, 15, " Y = [%d] X = [%d]", player->posY, player->posX);
}

void map_ncurse(player_t *player)
{
    initscr();
    int ch;
    keypad(stdscr, TRUE);
    while (1) {
        clear();
        for (int i = 0; player->tab[i] != NULL; i++) {
            printw(player->tab[i]);
            printw("\n");
        }
        refresh();
        while((ch = getch()) != ' ') {
            switch (ch) {
                case KEY_UP:
                    pos_P(player);
                    break;
                case KEY_DOWN:
                    pos_P(player);
                    break;
                case KEY_LEFT:
                    pos_P(player);
                    break;
                case KEY_RIGHT:
                   // pos_P(map, player);
                    break;
                default:
                    break;
            }
        }
    }
    endwin();
}