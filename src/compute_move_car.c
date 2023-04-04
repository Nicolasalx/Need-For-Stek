/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-thibaud.cathala
** File description:
** compute_move_car
*/

#include "my.h"

void compute_turn_direction(car_t *car, int angle)
{
    if (car->lidar[LEFT] > car->lidar[RIGHT]
    && car->lidar[RIGHT] < 1000) {
        my_putstr("WHEELS_DIR:0.0\n");
        turn_right(angle);
        print_error(RED("LEFT ", INT(angle), "\n"));
    } else if (car->lidar[RIGHT] > car->lidar[LEFT]
    && car->lidar[LEFT] < 1000) {
        my_putstr("WHEELS_DIR:0.0\n");
        turn_left(angle);
        print_error(RED("RIGHT ", INT(angle), "\n"));
    } else {
        my_putstr("WHEELS_DIR:0.0\n");
    }
}

void compute_move_car(car_t *car)
{
    if (LIDAR_MIDDLE(car->lidar) > 3000) {
        go_forward(50);
        print_error(GREEN("SPEED ", INT(100), "\n"));
        compute_turn_direction(car, 1);
    } else if (LIDAR_MIDDLE(car->lidar) > 2000) {
        go_forward(20);
        print_error(GREEN("SPEED ", INT(20), "\n"));
        compute_turn_direction(car, 10);
    } else {
        go_forward(10);
        print_error(GREEN("SPEED ", INT(10), "\n"));
        compute_turn_direction(car, 20);
    }
}
