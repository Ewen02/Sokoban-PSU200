/*
** EPITECH PROJECT, 2020
** my_env
** File description:
** //
*/

#include "../include/my_src.h"
#include "../include/my_printf.h"
#include "../include/my_str.h"
#include "../include/my_utils.h"

char *my_strcpy(char *dest, char const *src)
{
    int i;
    for (i = 0 ; src[i] != '\0' ; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}