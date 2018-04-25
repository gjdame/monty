#include "monty.h"
/**
 *
 *
 */
void _add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		error_exit(stack);
	}
	(*stack)->next->n += (*stack)->n;
	_pop(stack, line_number);
	return;
}

/**
 *
 *
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		error_exit(stack);
	}
	(*stack)->next->n -= (*stack)->n;
	_pop(stack, line_number);
	return;
}

/**
 *
 *
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't mul, stack too short\n", line_number);
		error_exit(stack);
	}
	(*stack)->next->n *= (*stack)->n;
	_pop(stack, line_number);
	return;
}

/**
 *
 *
 */
void _div(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't div, stack too short\n", line_number);
		error_exit(stack);
	}
	(*stack)->next->n /= (*stack)->n;
	_pop(stack, line_number);
	return;
}

/**
 *
 *
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't mod, stack too short\n", line_number);
		error_exit(stack);
	}
	(*stack)->next->n %= (*stack)->n;
	_pop(stack, line_number);
	return;
}
