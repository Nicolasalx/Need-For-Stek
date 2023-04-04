/*
** EPITECH PROJECT, 2022
** my_str_to_board
** File description:
** my_str_to_board
*/

#include <stdlib.h>
#include "my_malloc.h"

char **my_str_to_board(const char *str, int nb_line, const int *lines_size)
{
    int i;
    int j;
    int index_str = 0;
    char **board = my_malloc(sizeof(char *) * (nb_line + 1));

    for (i = 0; i < nb_line; ++i) {
        board[i] = my_malloc(sizeof(char) * (lines_size[i] + 1));
        for (j = 0; j < lines_size[i]; ++j) {
            board[i][j] = str[index_str];
            ++ index_str;
        }
        board[i][j] = '\0';
        ++ index_str;
    }
    board[i] = NULL;
    return board;
}
