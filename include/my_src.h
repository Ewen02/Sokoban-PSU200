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

typedef struct player_s
{
    char **tab;
    char **map;
    int posY;
    int posX;
}player_t;


#pragma once

int main(int ac, char **av);
int file_pathe(char const *str);
void filling_tab(char *buffer, char letter);
void map_ncurse(player_t *player);