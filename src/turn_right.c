/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-thibaud.cathala
** File description:
** trun_right
*/

#include "my.h"

void turn_right(int angle)
{
    double real_angle;
    if (angle >= 100.0) {
        angle = 100.0;
    }
    real_angle = (double) (angle / 100.0);

    my_putstr("WHEELS_DIR:-");
    my_put_double(real_angle, 1);
    my_putstr("\n");
}
