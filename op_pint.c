#include "monty.h"

/**
 * op_pall - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_pint(stack_t **head, unsigned int line_number)
{

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
freestack(*head);
shutdown();
}

fprintf(stdout, "%i\n", (*head)->n);
}
