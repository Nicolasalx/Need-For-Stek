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

void check_track_cleared(char *line)
{
    int nb_word = count_nb_word(line, ":\n");
    int *size_word = count_size_word(line, ":\n", nb_word);
    char **word = my_str_to_word(line, ":\n", nb_word, size_word);

    print_error("WORD 4 :", word[3], "\n");
    if (nb_word >= 4 && my_strcmp(word[3], "Track Cleared") == 0) {
        is_track_cleared(true);
    }
}

void wait_for_the_response(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    read = getline(&line, &len, stdin);
    if (read == -1) {
        return;
    }
    print_error(RED("NEW :"), line);
    check_track_cleared(line);
    free(line);
}
