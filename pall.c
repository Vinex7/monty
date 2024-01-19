#include "monty.h"

/**
 * f_pall - prints the elements of the stack
 * @head: pointer to the head of the stack
 * @counter: unused parameter (line number)
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *h;
    (void)counter;

    h = *head;
    if (h == NULL)
        return;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}

