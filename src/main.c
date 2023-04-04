/*
** EPITECH PROJECT, 2022
** AIA
** File description:
** main.c
*/

#include "my.h"

int main(void)
{
    car_t car = {.lidar = NULL, .speed = 0};

    main_loop(&car);
    return 0;
}
