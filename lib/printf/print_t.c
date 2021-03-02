/*
** EPITECH PROJECT, 2020
** printf_projet
** File description:
** %t
*/

#include "../../include/my_utils.h"
#include "../../include/my_str.h"
#include "../../include/my_printf.h"

void print_tab(va_list arg)
{
    char **tab = va_arg(arg, char **);

    for (int i = 0; tab[i] != NULL; i++)
        my_printf("%s\n", tab[i]);
}