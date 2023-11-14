#include "monty.h"
/**
 * op_push - This program is to push into a stack
 * @head - header of the stack
 * @line_number - number of the line
 * Return: EXIT_FAILURE in any occured issue, else nothing
 */
void op_push (stack_t **head, unsigned int line_number)
{
(void)line_number;
char *argument;
int number;

argument = strtok(charC, " \n\t");
argument = strtok(NULL, " \n\t");
number = atoi(argument);
addstack(head, number);
}
