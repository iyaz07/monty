#include "monty.h"

/**
 * op_rotl - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_rotl(stack_t **head, unsigned int line_number)
{
stack_t *finalnode, *firstnode;
(void)line_number;

finalnode = *head;
firstnode = *head;

if (*head != NULL)
{
	if ((*head)->next != NULL)
	{
		while (finalnode->next != NULL)
		{
		finalnode = finalnode->next;
		}

	*head = (*head)->next;
	finalnode->next = firstnode;
	firstnode->prev = finalnode;
	firstnode->next = NULL;
	(*head)->prev = NULL;
	}
}

}
