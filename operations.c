#include "monty.h"
/**
 * process - To process a line of monty code
 * @stack: a pointer to the head of the stack
 * @linenum: to read the line number
 * @line: the information in a line
 * Return: EXIT_FAILURE in any occured issue, else 0
 */
int process(char *line, stack_t **stack, size_t linenum)
{
char *operation;
unsigned int i = 0;

instruction_t inst[] = {{"push", op_push}, {"pint", op_pint}
, {"pop", op_pop}, {"add", op_add}, {"pall", op_pall}
, {"swap", op_swap}, {"nop", op_nop}, {"sub", op_sub}
, {"div", op_div}, {NULL, NULL}};

operation = strtok(line, " \n\t\r");
bank.pusharg = strtok(NULL, " \n\t\r");

while (inst[i].opcode != NULL && operation != NULL)
{

if (strcmp(inst[i].opcode, operation) == 0)
{
	inst[i].f(stack, linenum);
	return (0);
}

i++;
}

fprintf(stderr, "L%ld: unknown instruction %s\n", linenum, operation);
shutdown(stack);

return (1);
}
