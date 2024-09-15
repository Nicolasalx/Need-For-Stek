/*
** EPITECH PROJECT, 2023
** my_lib
** File description:
** my_strchr
*/

int my_strchr(const char *str, char c)
{
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == c) {
            return i;
        }
    }
    return -1;
}
