/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../include/my.h"

int my_put_nbr(int nb)
{
    long p = 1;
    long temp = nb;
    long keep = 0;

    if (nb < 0)
    {
        temp *= -1;
        my_putchar('-');
    }
    while (temp / p > 9) {
        p = p  * 10;
    }
    while (p > 0) {
        keep = temp / p + 48;
        temp = temp % p;
        p /= 10;
        my_putchar(keep);
    }
}