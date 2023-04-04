/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-thibaud.cathala
** File description:
** print_lidar_info
*/

#include "my.h"
#include <stdlib.h>

void print_lidar_info(int *lidar)
{
    if (lidar != NULL) {
        for (int i = 0; i < NB_LIDAR_RAY; ++i) {
            print_error(INT(lidar[i]), " ");
        }
        print_error("\n");
    }
}
