#include "monty.h"

/**
 * shutdown - This program is to close the file and exit with EXIT_FAILURE
 * Return: EXIT_FAILURE
 */

void shutdown(stack_t **stack)
{
freestack(*stack);
free(bank.lineL);
fclose(bank.fileF);
exit(EXIT_FAILURE);
}
