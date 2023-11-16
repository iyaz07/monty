#include "monty.h"

/**
 * op_pchar - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_pchar(stack_t **head, unsigned int line_number)
{

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
shutdown(head);
}

if (((*head)->n < 0) || ((*head)->n  > 127))
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
shutdown(head);
}

fprintf(stdout, "%c\n", (*head)->n);
}
