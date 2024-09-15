/*
** EPITECH PROJECT, 2023
** my_lib
** File description:
** free_linked_list_with_method
*/

#include "my_linkedlist.h"
#include <stdlib.h>

void free_linked_list_wm(node_t **head, void (*method)(void *))
{
    node_t *current;
    node_t *next;

    if (*head == NULL) {
        return;
    }
    current = (*head)->next;
    while (current != *head) {
        next = current->next;
        method(current->data);
        free(current);
        current = next;
    }
    method((*head)->data);
    free(*head);
    *head = NULL;
}
