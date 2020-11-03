/*
** EPITECH PROJECT, 2020
** functions
** File description:
** printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../include/my.h"

void print_str(va_list argv)  //char *
{
    my_putstr(va_arg(argv, char *));
}

void print_int(va_list argv) //int
{
    my_put_nbr(va_arg(argv, int));
}

void print_char(va_list argv) //char
{
    my_putchar(va_arg(argv, int));
}

void print_long(va_list argv) //long
{
    my_put_long(va_arg(argv, long));
}