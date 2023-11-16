#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct bankstructure - file and line content
 * @fileF: pointer to monty file
 * @lineL: line content
 * @pusharg: Argument next to the push command
 */
typedef struct bankstructure
{
	FILE *fileF;
	char *lineL;
	char *pusharg;
}  bankdef;
extern bankdef bank;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **head, unsigned int line_number);
} instruction_t;

void freestack(stack_t *head);
int process(char *line, stack_t **stack, size_t linenum);
void op_push(stack_t **head, unsigned int line_number);
void op_pall(stack_t **head, unsigned int line_number);
void op_pint(stack_t **head, unsigned int line_number);
void op_pop(stack_t **head, unsigned int line_number);
void op_swap(stack_t **head, unsigned int line_number);
void op_add(stack_t **head, unsigned int line_number);
void op_nop(stack_t **head, unsigned int line_number);
void op_sub(stack_t **head, unsigned int line_number);
void op_div(stack_t **head, unsigned int line_number);
void op_mul(stack_t **head, unsigned int line_number);
void op_mod(stack_t **head, unsigned int line_number);
void op_pchar(stack_t **head, unsigned int line_number);
void op_pstr(stack_t **head, unsigned int line_number);
void addstack(stack_t **head, unsigned int n);
void shutdown(stack_t **stack);

#endif
