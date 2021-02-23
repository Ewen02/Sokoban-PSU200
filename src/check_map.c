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

int check_map(player_t *player)
{
    int counter = 0;
    for (int i = 0; player->tab[i] != NULL; i++){
        for (int j = 0; player->tab[i][j] != '\0'; j++) {
            if (player->tab[i][j] == 'O')
                counter++;
            if (counter == 0)
                return 0;
        }
    }
    return 1;
}