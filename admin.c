/*
** EPITECH PROJECT, 2020
** admin
** File description:
** lll JÖKER lll
*/

#include "my.h"

int admin(int ac, char **av)
{
    if (ac == 1)
        return (0);
    if (av[1][0] == '-' && av[1][1] == 'h')
        law();
    else {
        my_putstr("type: ./my_runner\n");
        exit (84);
    }
    return (0);
}