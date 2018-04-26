#include "monty.h"
/**
 * _nop - do nothing
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
 *
 */
void _nop(__attribute__ ((unused))stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	return;
}
/**
 * _pchar - print character
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
 *
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *runner;
	int val;

	if (*stack == NULL)
	{
		printf("L%d: can't pchar, stack empty\n", line_number);
		error_exit(stack);
	}

	runner = *stack;
	val = runner->n;

	if (!isprint(val))
	{
		printf("L%d: can't pchar, value out of range\n", line_number);
		error_exit(stack);
	}

	putchar(val);
	putchar('\n');
}
