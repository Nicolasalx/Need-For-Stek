/*
** EPITECH PROJECT, 2022
** AIA
** File description:
** main.c
*/

#include "my.h"

int main(void)
{
    car_t car = {.lidar = NULL};

    main_loop(&car);
    return 0;
}
