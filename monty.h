#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void push(stack_t **hd, unsigned int num);
void pall(stack_t **hd, unsigned int num);
void pint(stack_t **hd, unsigned int num);
int execute(char *cont, stack_t **stk, unsigned int count, FILE *f);
void frStack(stack_t *hd);
void pop(stack_t **hd, unsigned int count);
void swap(stack_t **hd, unsigned int count);
void add(stack_t **hd, unsigned int count);
void nop(stack_t **hd, unsigned int count);
void sub(stack_t **hd, unsigned int count);
void divides(stack_t **hd, unsigned int count);
void multp(stack_t **hd, unsigned int count);
void mod(stack_t **hd, unsigned int count);
void prChar(stack_t **hd, unsigned int count);
void prStr(stack_t **hd, unsigned int cont);
void rotl(stack_t **hd, unsigned int count);
void rotr(stack_t **hd, __attribute__((unused)) unsigned int count);
void nodeAdd(stack_t **hd, int nv);
void addQueue(stack_t **hd, int nv);
void queue(stack_t **hd, unsigned int count);
void stack(stack_t **hd, unsigned int count);
#endif
