/*
** EPITECH PROJECT, 2022
** AIA
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include "my_error.h"
    #include "my_number.h"
    #include "my_string.h"
    #include "my_malloc.h"
    #include "my_file.h"
    #include "my_linkedlist.h"

    #define NB_LIDAR_RAY 32

    #define LIDAR_MIDDLE(lidar) (((lidar)[15] + (lidar)[16]) / 2.0)
    #define LIDAR_LEFT 0
    #define LIDAR_RIGHT 31

    #define MIN_SPEED 0
    #define MAX_SPEED 100

    #define MIN_TURN_ANGLE 50
    #define MAX_TURN_ANGLE 50

typedef struct {
    int *lidar;
} car_t;

void main_loop(car_t *car);
void get_lidar_info(int **lidar);
void print_lidar_info(int *lidar);
void go_forward(int speed);
void turn_left(int angle);
void turn_right(int angle);
void compute_move_car(car_t *car);
void wait_for_the_response(void);

#endif /*MY_H_*/
