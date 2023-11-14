#include "monty.h"

/**
 * freestack- frees a double linked list (stack).
 * @head:A pointer to the first structure of the list.
 * Return: Nothing since it frees a structure
 */

void freestack(stack_t *head)
{
if (head == NULL)
{ return; }

while (head->next != NULL)
{
head = head->next;
free(head->prev);
}

free(head);
}
