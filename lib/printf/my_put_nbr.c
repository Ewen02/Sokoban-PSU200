/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../../include/my_utils.h"
#include "../../include/my_str.h"
#include "../../include/my_printf.h"

int my_put_nbr(int nb)
{
    int a;
    int b;

    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(-1 * nb);
    }
    else {
        a = nb / 10;
        b = nb % 10;
        if (a != 0) {
            my_put_nbr(a);
            my_putchar(b + '0');
        }
        else {
            my_putchar(b + '0');
        }
    }
    return (0);
}
