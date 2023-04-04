/*
** EPITECH PROJECT, 2022
** my_str_to_word_wm
** File description:
** my_str_to_word_wm
*/

#include "my_string.h"
#include "my_malloc.h"
#include <stdlib.h>

char **my_str_to_word_wm(const char *str, bool (*method)(char),
    int nb_word, const int *size_word)
{
    char **words = malloc_adv_board(nb_word, size_word);
    int i_index = 0;
    int j_index = 0;
    int end_word = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (method(str[i]) == 0) {
            words[i_index][j_index] = str[i];
            ++ j_index;
            end_word = 1;
        }
        if (method(str[i]) == 1 && end_word == 1) {
            end_word = 0;
            ++ i_index;
            j_index = 0;
        }
    }
    return words;
}
