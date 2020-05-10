/*
** EPITECH PROJECT, 2020
** law_of_my_runner
** File description:
** lll JÖKER lll
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i])
        my_putchar(str[i++]);
    return (0);
}

void law(void)
{
    my_putstr("Welcome to MY RUNNER !\n\n");
    my_putstr("The man is autorunning.\n");
    my_putstr("Just press SPACE for jump !\n\nLet's enjoy ! ;)\n");
    exit (0);
}