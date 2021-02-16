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

#pragma once

int main(int ac, char **av);
int file_pathe(char const *str);
char **filling_tab(char *buffer);