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
    wait_for_the_response();
    while (is_track_cleared(false) == false) {
        get_lidar_info(&car->lidar);
        if (car->lidar != NULL) {
            compute_move_car(car);
        }
    }
    my_putstr("STOP_SIMULATION\n");
    wait_for_the_response();
}
