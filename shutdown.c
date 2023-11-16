#include "monty.h"

/**
 * shutdown - This program is to close the file and exit with EXIT_FAILURE
 * Return: EXIT_FAILURE
 */

void shutdown(void)
{
fclose(bank.fileF);
exit(EXIT_FAILURE);
}
