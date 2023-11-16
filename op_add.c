#include "monty.h"

/**
 * op_add - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_add(stack_t **head, unsigned int line_number)
{

if (*head == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
shutdown(head);
}

if ((*head)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
shutdown(head);
}

((*head)->next)->n += (*head)->n;
*head = (*head)->next;
free((*head)->prev);
}
