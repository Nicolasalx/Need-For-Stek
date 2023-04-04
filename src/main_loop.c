/*
** EPITECH PROJECT, 2022
** AIA
** File description:
** main_loop.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>

void main_loop(car_t *car)
{
    my_putstr("START_SIMULATION\n");
    while (1) {
        get_lidar_info(&car->lidar);
        if (car->lidar != NULL) {
            compute_move_car(car);
        }
        print_lidar_info(car->lidar); // ! pour debug
    }
    my_putstr("STOP_SIMULATION\n");
}
