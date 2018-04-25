#include "monty.h"
/**
 *
 *
 */
void _add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
		exit(-1);
	printf("%d\n", (*stack)->n + (*stack)->next->n);
	return;
}
