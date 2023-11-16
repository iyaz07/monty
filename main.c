#include "monty.h"
bankdef bank = {NULL, NULL, NULL};
/**
 * main - This program is to create a stack using a monty file as input
 * @argc: argument count
 * @argv: argument vector
 * Return: EXIT_FAILURE in any occured issue, else 0
 */


int main(int argc, char *argv[])
{
size_t buffersize = 0;
size_t linenum = 1;
FILE *file = NULL;
char *buffer = NULL;
int check = 0;
stack_t *stack = NULL;

if (argc != 2)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
if (file == NULL)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
}

bank.fileF = file;

while ((check = (getline(&buffer, &buffersize, file))) > 0)
{
	bank.lineL = buffer;
	if (check != 0)
	{
		process(buffer, &stack, linenum);
	}
	linenum++;
}
free(buffer);
freestack(stack);
fclose(file);
return (0);
}
