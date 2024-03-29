#include "monty.h"

/**
 * free_stack - Frees a doubly linked list.
 * @head: Pointer to the head of the stack.
 */
void free_stack(stack_t *head)
{
    stack_t *aux;

    aux = head;
    while (head != NULL)
    {
        aux = head->next;
        free(head);
        head = aux;
    }
}

