#include "monty.h"
/**
 * main - This program is to create a stack using a monty file as input
 * @argc - argument count
 * @argv - argument vector
 * Return: EXIT_FAILURE in any occured issue, else 0
 */

FILE *fileF;
char *lineL;

int main(int argc, char *argv[])
{
size_t bufferline = 0;
size_t linenum = 1;
int check;

if (argc != 2) 
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

fileF = fopen(argv[1], "r");
if (fileF == NULL)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
}

while ((check = (getline(&lineL, &bufferline, fileF))) != -1)
{
	if (check != 0)
	{ process(linenum); }
	linenum++;
}

free(lineL);
fclose(fileF);
return (0);
}
