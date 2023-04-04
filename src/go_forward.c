/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-thibaud.cathala
** File description:
** go_forward
*/

#include "my.h"

void go_forward(int speed)
{
    double real_speed;

    if (speed >= 100.0) {
        speed = 100.0;
    }
    real_speed = (double) (speed / 100.0);

    if (speed > 0.0) {
        my_putstr("CAR_FORWARD:");
        my_put_double(real_speed, 1);
        my_putstr("\n");
    }
}
