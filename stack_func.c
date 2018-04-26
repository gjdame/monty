#include "monty.h"
/**
 * _push - push int to a stack
 * @stack: linked lists for monty stack
 * @line_number: number of line opcode occurs on
 */
void _push(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *new;
	char *arg;
	int push_arg;

	push_arg = 0;
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		printf("Error: malloc failed\n");
		error_exit(stack);
	}

	arg = strtok(NULL, "\n ");
	if (isnumber(arg) == 1 && arg != NULL)
	{
		push_arg = atoi(arg);
	}
	else
	{
		printf("L%d: usage: push integer\n", line_number);
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
 * _pall - print all function
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
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
 * _pint - print int a top of stack
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
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
 * _swap - swap top of stack and second top of stack
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
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
/**
 * _pop - delete item at top of stack
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		error_exit(stack);
	}
	delete_dnodeint_at_index(stack, 0);
}
