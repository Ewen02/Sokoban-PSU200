/*
** EPITECH PROJECT, 2020
** printf_project
** File description:
** %d
*/

#include "../../include/my_utils.h"
#include "../../include/my_str.h"
#include "../../include/my_printf.h"

void printf_d (va_list arg)
{
    int nb = va_arg(arg, int);

    if (nb >= 0 && nb <= 9){
        my_putchar(nb + '0');
    }
    else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    }
    else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
}
