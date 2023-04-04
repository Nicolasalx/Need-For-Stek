/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-thibaud.cathala
** File description:
** wait_for_the_response
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

void wait_for_the_response(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    read = getline(&line, &len, stdin);
    if (read == -1) {
        return;
    }
    free(line);
}
