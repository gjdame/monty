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
	if (*stack == NULL)
	{
		new->n = push_arg;
		new->next = NULL;
		new->prev = NULL;
		*stack = new;
		return;
	}

	(*stack)->prev = new;
	new->n = push_arg;
	new->next = *stack;
	new->prev = NULL;
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

void _pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		return;
	delete_dnodeint_at_index(stack, 0);
}
