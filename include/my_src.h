/*
** EPITECH PROJECT, 2020
** src/
** File description:
** //
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <dirent.h>
#include <ncurses.h>
#include <stdbool.h>

#include "my_printf.h"
#include "my_str.h"
#include "my_utils.h"


#undef  EXIT_FAILURE
#define EXIT_FAILURE 84

#ifdef EXIT_ERROR
#undef EXIT_ERROR
#endif
#define EXIT_ERROR 1


typedef struct player_s
{
    char **tab;
    char **map;
}player_t;

#pragma once

int main(int ac, char **av);
int file_pathe(char const *str);
int filling_tab(player_t *player, char *buffer, char letter);
player_t *filling_map(char *buffer, char letter);
int map_ncurse(player_t *player);
int check_win(player_t *player);
int check_loose(player_t *player);
void refresh_map(player_t *player);
void parcing_map_l(player_t *player);
void parcing_map_r(player_t *player);
void parcing_map_u(player_t *player);
void parcing_map_d(player_t *player);
void my_switc(player_t *player, int ch);