/*
** EPITECH PROJECT, 2020
** memset
** File description:
** memset
*/

#include "../include/my.h"

void my_memset(char *str, int c, int len)
{
    for (int i = 0; i < len; i++)
        str[i] = c;
}