#include "monty.h"
/**
 *
 *
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
		exit(-1);
	new->prev = NULL;
	new->next = *stack;
	new->n = push_arg;
	(*stack)->prev = new;
	*stack = new;
}
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *runner;
	runner = *stack;

	while (runner != NULL)
	{
		printf("%d\n", runner->n);
		runner = runner->next;
	}
}
	
