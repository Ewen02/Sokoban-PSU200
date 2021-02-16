/*
** EPITECH PROJECT, 2021
** strncpy
** File description:
** //
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    if (i == n)
        dest[i] = '\0';
    return (dest);
}
