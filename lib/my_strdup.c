/*
** EPITECH PROJECT, 2021
** //
** File description:
** //
*/

#include "../include/my_utils.h"
#include "../include/my_str.h"
#include "../include/my_printf.h"
#include "../include/my_src.h"

char *my_strdup(char const *src)
{
    char *dest;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    dest = my_strcpy(dest, src);
    return (dest);
}