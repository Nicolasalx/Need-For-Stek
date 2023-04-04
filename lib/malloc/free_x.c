/*
** EPITECH PROJECT, 2023
** my_lib
** File description:
** free_x
*/

#include <stdlib.h>

void free_x(int nb_free, void *data[])
{
    for (int i = 0; i < nb_free; ++i) {
        free(data[i]);
    }
}
