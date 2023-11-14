#include "monty.h"
/**
 * main - This program is to create a stack using a monty file as input
 * @argc - argument count
 * @argv - argument vector
 * Return: EXIT_FAILURE in any occured issue, else 0
 */
int main(int argc, char *argv[])
{
FILE* file;
char *buffer = NULL;
size_t buffer_num = 0;
size_t line = 1;



if (argc != 2) 
{
	dprintf(STDERR_FILENO, "USAGE: monty file");
	exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r")
if (file == NULL)
{
	dprintf(STDERR_FILENO, "USAGE: monty file");
	exit(EXIT_FAILURE);
}


for (line = 1, getline(&buffer, &buffer_line, file) != 0, line++)
{
dprintf(STDOUT_FILENO, "%s",buffer);
free(buffer);
}

fclose(file);
return (0);
}
