/*
** EPITECH PROJECT, 2020
** printf_project
** File description:
** %s
*/

#include "../../include/my_utils.h"
#include "../../include/my_str.h"
#include "../../include/my_printf.h"

char printf_s (va_list arg)
{
    char *str = va_arg(arg, char *);

    return (my_putstr(str));
}
