/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-thibaud.cathala
** File description:
** is_track_clear
*/

#include "my.h"

bool is_track_cleared(bool is_cleared)
{
    static bool is_clear = false;

    if (is_cleared == true) {
        is_clear = true;
    }
    return is_clear;
}
