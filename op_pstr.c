#include "monty.h"

/**
 * op_pstr - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_pstr(stack_t **head, unsigned int line_number)
{
int length = 0;
int counter = 0;
stack_t *keep;
(void)line_number;

keep = *head;

while (keep != NULL)
{
if ((keep->n <= 0) || (keep->n > 127))
{
	break;
}
length++;
keep = keep->next;
}

keep = *head;

for (counter = 0; counter < length; counter++)
{
	fprintf(stdout, "%c", keep->n);
	keep = keep->next;
}

fprintf(stdout, "\n");
}
