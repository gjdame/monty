#include "monty.h"
/**
 *
 *
 */
void _push(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		printf("Error: malloc failed");
		error_exit(stack);
	}
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
/**
 *
 *
 */
void _pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *runner;

	runner = *stack;
	while (runner != NULL)
	{
		printf("%d\n", runner->n);
		runner = runner->next;
	}
}
/**
 *
 *
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *runner;

	runner = *stack;
	if (runner == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		error_exit(stack);
	}
	printf("%d\n", runner->n);
}
/**
 *
 *
 */
void _swap(stack_t **stack, unsigned int line_number)
{
        stack_t *runner;
	int tmp;

        runner = *stack;
        if (runner == NULL || runner->next == NULL)
        {
                printf("L%d: can't swap, stack too short\n", line_number);
                error_exit(stack);
        }
	tmp = runner->n;
	runner->n = runner->next->n;
	runner->next->n = tmp;
}

void _pop(stack_t **stack, unsigned int line_number)

	if (*stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		error_exit(stack);
	}
	delete_dnodeint_at_index(stack, 0);
}
