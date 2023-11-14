#include "monty.h"
/**
 * main - This program is to create a stack using a monty file as input
 * @argc - argument count
 * @argv - argument vector
 * Return: EXIT_FAILURE in any occured issue, else 0
 */
int process(char *line, size_t linenum)
{
char *operation;
unsigned int i = 0;
stack_t *stack = NULL;

instruction_t inst[] = {{"push", op_push}, {"pall", op_pall}, {NULL, NULL}};
operation = strtok(line, " \n\t");
charC = operation;

while (inst[i].opcode != NULL && operation != NULL)
{

if (strcmp(inst[i].opcode, line) == 0)
{
	inst[i].f(&stack, linenum);
	return (0);
}

i++;
}

fprintf(stderr, "L%ld: unknown instruction %s", linenum , operation);
fclose(fileE);
freestack(stack);
exit(EXIT_FAILURE);

return (1);
}
