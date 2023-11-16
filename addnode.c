#include "monty.h"

/**
 * add_dnodeint - Adds a new node at the start of a double linked list
 * @head:Pointer to the first structure(element in the list).
 * @n: The integer added to the list.
 * Return: The address of the new element.
 */

void addstack(stack_t **head, unsigned int n)
{
stack_t *node;

node = malloc(sizeof(stack_t));

if (node == NULL)
{ return; }

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
