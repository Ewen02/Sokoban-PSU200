/*
** EPITECH PROJECT, 2020
** printf_projet
** File description:
** %c
*/

#include "../../include/my_utils.h"
#include "../../include/my_str.h"
#include "../../include/my_printf.h"

void printf_c (va_list arg)
{
    char c = va_arg(arg, int);

    write (1, &c, 1);
}
