#include "monty.h"

/**
 * op_push - This program is to push into a stack
 * @head: header of the stack
 * @line_number: number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */

void op_push(stack_t **head, unsigned int line_number)
{
int number;
(void)line_number;

number = atoi(bank.lineL);
addstack(head, number);

}
