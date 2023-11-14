#include "monty.h"
/**
 * main - This program is to create a stack using a monty file as input
 * @argc - argument count
 * @argv - argument vector
 * Return: EXIT_FAILURE in any occured issue, else 0
 */
int main(int argc, char *argv[])
{
FILE *file;
char *buffer;
size_t bufferline = 0;
size_t line = 1;

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

fileE = file;

while ((getline(&buffer, &bufferline, file)) != -1)
{
    process(buffer, line);
    line++;
}

free(buffer);
fclose(file);
return (0);
}
