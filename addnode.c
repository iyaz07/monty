#include "monty.h"

/**
 * addstack - Adds a new node at the start of a double linked list
 * @head:Pointer to the first structure(element in the list).
 * @n: The integer added to the list.
 * Return: The address of the new element.
 */

void addstack(stack_t **head, unsigned int n)
{
stack_t *node;

node = malloc(sizeof(stack_t));

if (node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
shutdown(head);
}

node->n = n;
node->next = NULL;
node->prev = NULL;

if (*head != NULL)
{
node->next = *head;
(*head)->prev = node;
}

*head = node;
}
