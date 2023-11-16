#include "monty.h"

/**
 * op_div - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_mod(stack_t **head, unsigned int line_number)
{

if (*head == NULL)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
shutdown(head);
}

if ((*head)->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
shutdown(head);
}

if ((*head)->next == NULL)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
shutdown(head);
}

((*head)->next)->n %= (*head)->n;
*head = (*head)->next;
free((*head)->prev);
}
