#include "monty.h"

/**
 * op_swap - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_swap(stack_t **head, unsigned int line_number)
{
unsigned int storage;

if (*head == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
freestack(*head);
shutdown();
}

if ((*head)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
freestack(*head);
shutdown();
}

storage = ((*head)->next)->n;
((*head)->next)->n = (*head)->n;
(*head)->n = storage;

}
