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

/**
 *
 *
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
		exit(-1);
	printf("%d\n", (*stack)->next->n - (*stack)->n);
	return;
}

/**
 *
 *
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
		exit(-1);
	printf("%d\n", (*stack)->next->n * (*stack)->n);
	return;
}

/**
 *
 *
 */
void _div(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
		exit(-1);
	printf("%d\n", (*stack)->next->n / (*stack)->n);
	return;
}

/**
 *
 *
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
		exit(-1);
	printf("%d\n", (*stack)->next->n % (*stack)->n);
	return;
}
