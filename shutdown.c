#include "monty.h"

/**
 * shutdown - This program is to close any lingering memory
 * and exit with EXIT_FAILURE
 * @stack: The pointer to the head of the stack to free it
 * Return: EXIT_FAILURE
 */

void shutdown(stack_t **stack)
{
freestack(*stack);
free(bank.lineL);
fclose(bank.fileF);
exit(EXIT_FAILURE);
}
