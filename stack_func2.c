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
		exit(-1);
	}
	putchar(val);
	putchar('\n');
}
