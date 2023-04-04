/*
** EPITECH PROJECT, 2023
** my_lib
** File description:
** count_size_word_wm
*/

#include "my_malloc.h"
#include <stdbool.h>

int *count_size_word_wm(const char *str, bool (*method)(char), int nb_word)
{
    int *size_word = malloc_array(nb_word);
    int count_size_word = 0;
    int end_word = 0;
    int index = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (method(str[i]) == 0) {
            ++ count_size_word;
            end_word = 1;
        }
        if (method(str[i]) == 1 && end_word == 1) {
            end_word = 0;
            size_word[index] = count_size_word;
            ++ index;
            count_size_word = 0;
        }
    }
    if (end_word == 1)
        size_word[index] = count_size_word;
    return size_word;
}
