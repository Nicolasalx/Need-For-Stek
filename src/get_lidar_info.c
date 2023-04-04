/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-thibaud.cathala
** File description:
** get_idar_info
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

void delete_content_after_comma(char **word, int i, int j, bool *delete)
{
    if (word[i][j] == '.') {
        *delete = true;
    }
    if (*delete) {
        word[i][j] = '\0';
    }
}

void clean_lidar_info(char **word)
{
    bool delete = false;

    for (int i = 3; i < 3 + NB_LIDAR_RAY; ++i) {
        for (int j = 0; word[i][j] != '\0'; ++j) {
            delete_content_after_comma(word, i, j, &delete);
        }
        delete = false;
    }
}

void parse_lidar_info(char *line, int **lidar)
{
    int nb_word = count_nb_word(line, ":\n");
    int *size_word;
    char **word;

    if (nb_word < 36) {
        return;
    }
    if (*lidar == NULL) {
        *lidar = malloc_array(NB_LIDAR_RAY);
    }
    size_word = count_size_word(line, ":\n", nb_word);
    word = my_str_to_word(line, ":\n", nb_word, size_word);
    clean_lidar_info(word);
    for (int i = 3; i < 3 + NB_LIDAR_RAY; ++i) {
        (*lidar)[i - 3] = my_get_nb(word[i]);
    }
    free(size_word);
    free_board(word);
}

void get_lidar_info(int **lidar)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    my_putstr("GET_INFO_LIDAR\n");
    read = getline(&line, &len, stdin);
    if (read == -1) {
        return;
    }
//    print_error(RED("NEW :"), line);
    parse_lidar_info(line, lidar);
    free(line);
}
