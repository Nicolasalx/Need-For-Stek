/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-thibaud.cathala
** File description:
** compute_move_car
*/

#include "my.h"

void compute_turn_direction(car_t *car, int angle)
{
    if (car->lidar[LIDAR_LEFT] > car->lidar[LIDAR_RIGHT]
    && car->lidar[LIDAR_RIGHT] < 550) {
        turn_left(angle);
    } else if (car->lidar[LIDAR_RIGHT] > car->lidar[LIDAR_LEFT]
    && car->lidar[LIDAR_LEFT] < 550) {
        turn_right(angle);
    } else {
        my_putstr("WHEELS_DIR:0.0\n");
        wait_for_the_response();
    }
}

void slow_down(car_t *car, int *count)
{
    go_forward(0);
        if (*count > 100) {
            go_forward(10);
            *count = 0;
        }
        compute_turn_direction(car, 45);
        ++ *count;
}

void compute_move_car(car_t *car)
{
    static int count = 0;
    if (LIDAR_MIDDLE(car->lidar) > 3000
    && car->lidar[LIDAR_LEFT] > 100 && car->lidar[LIDAR_RIGHT] > 100) {
        go_forward(80);
        compute_turn_direction(car, 1);
        return;
    }
    if (LIDAR_MIDDLE(car->lidar) > 2000
    && car->lidar[LIDAR_LEFT] > 100 && car->lidar[LIDAR_RIGHT] > 100) {
        go_forward(40);
        compute_turn_direction(car, 2);
    } else if (LIDAR_MIDDLE(car->lidar) > 600
    && car->lidar[LIDAR_LEFT] > 100 && car->lidar[LIDAR_RIGHT] > 100) {
        go_forward(20);
        compute_turn_direction(car, 15);
    } else {
        slow_down(car, &count);
    }
}
