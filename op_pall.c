#include "monty.h"

/**
 * op_pall - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_pall(stack_t **head, unsigned int line_number)
{
stack_t *temp = *head;
(void)line_number;

while (temp != NULL)
{
	fprintf(stdout, "%i\n", temp->n);
	temp = temp->next;
}

}
