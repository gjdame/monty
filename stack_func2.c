#include "monty.h"
/**
 *
 *
 *
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	return;
}
/**
 *
 *
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *runner;
	int val;

	runner = *stack;
	val = runner->n;
	if (val < 0 || val > 127)
	{
		printf("L%d: can't pchar, value out of range\n", line_number);
		error_exit(stack);
	}
	if (*stack == NULL)
	{
		printf("L%d: can't pchar, stack empty\n", line_number);
		error_exit(stack);
	}
	putchar(val);
	putchar('\n');
}
