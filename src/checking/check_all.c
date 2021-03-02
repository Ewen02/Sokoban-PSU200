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

int check_all(player_t *player)
{
    int count_x = 0, count_o = 0;
    for (int i = 0; player->tab[i] != NULL; i++) {
        for (int j = 0; player->tab[i][j] != '\0'; j++) {
            if (player->tab[i][j] == 'X')
                count_x++;
            if (player->tab[i][j] == 'O')
                count_o++;
            if (count_o != count_x)
                return 0;
        }
    }
    
}