#include "monty.h"
/**
 * main - This program is to create a stack using a monty file as input
 * @argc - argument count
 * @argv - argument vector
 * Return: EXIT_FAILURE in any occured issue, else 0
 */
int process(char *line, size_t line, FILE *file)
{
	stack_t *stack = NULL;

instruction_t inst[] = {{"push", i_push}, {"pall", i_pall}, {NULL, NULL}}