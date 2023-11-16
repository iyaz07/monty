#include "monty.h"
/**
 * process - To process a line of monty code
 * @stack: a pointer to the head of the stack
 * @linenum: to read the line number
 * Return: EXIT_FAILURE in any occured issue, else 0
 */
int process(stack_t **stack, size_t linenum)
{
char *operation;
unsigned int i = 0;

instruction_t inst[] = {{"push", op_push}, {"pint", op_pint}
, {"pop", op_pop}, {"add", op_add}, {"pall", op_pall}
, {"swap", op_swap}, {NULL, NULL}};

operation = strtok(bank.lineL, " \n\t\r");
operation = strtok(NULL, " \n\t\r");

while (inst[i].opcode != NULL && bank.lineL != NULL)
{

if (strcmp(inst[i].opcode, bank.lineL) == 0)
{
	bank.lineL = operation;
	inst[i].f(stack, linenum);
	return (0);
}

i++;
}

fprintf(stderr, "L%ld: unknown instruction %s\n", linenum, bank.lineL);
freestack(*stack);
shutdown();

return (1);
}
