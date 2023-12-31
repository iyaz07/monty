#include "monty.h"

/**
 * op_pop - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_pop(stack_t **head, unsigned int line_number)
{
stack_t *keep;

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
shutdown(head);
}

keep = *head;

*head = (*head)->next;
free(keep);
}
