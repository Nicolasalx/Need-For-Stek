/*
** EPITECH PROJECT, 2022
** AIA
** File description:
** main_loop.c
*/

#include "my.h"

void main_loop(void)
{
    char *line = NULL;
    size_t line_len = 0;
    ssize_t wait_exit = 0;

    printf("START_SIMULATION\n");
    while (1) {
        wait_exit = getline(line, line_len, stdin);
        if (wait_exit == -1) {
            free(line);
            printf("STOP_SIMULATION\n");
            exit(84);
        }
        printf("CAR_FORWARD:0.3\n");
        printf("GET_INFO_LIDAR\n");
        
        if () {
            printf("WHEELS_DIR:-0.6\n");
        }
    }
    free(line);
    printf("STOP_SIMULATION\n");
    exit(0);
}
