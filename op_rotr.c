#include "monty.h"

/**
 * op_rotr - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_rotr(stack_t **head, unsigned int line_number)
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
	
	(finalnode->prev)->next = NULL;
	finalnode->next = firstnode;
	finalnode->prev = NULL;
	*head = finalnode;
	firstnode->prev = finalnode;
	}
}

}
