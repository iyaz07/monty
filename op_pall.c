#include "monty.h"
/**
 * main - This program is to create a stack using a monty file as input
 * @argc - argument count
 * @argv - argument vector
 * Return: EXIT_FAILURE in any occured issue, else 0
 */
void op_pall (stack_t **head, unsigned int line_number)
{
(void)line_number;

while(*head != NULL)
{
printf("D:\n");
printf("%i\n", (*head)->n);
*head = (*head)->next;
}

}
