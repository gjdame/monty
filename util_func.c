#include "monty.h"
/**
 * error_exit - frees the stack and exits due to erro
 * @stack: pointer to the head of the stack
 *
 */
void error_exit(stack_t **stack)
{
	if (*stack)
		free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
 * _rotl - rotates the list left
 * @stack: pointer to the top of the stack
 * @line_number: the index of the current line
 *
 */
void _rotl(stack_t **stack,__attribute__ ((unused))unsigned int line_number)
{
	stack_t *runner;
	int temp1, temp2;

	if (*stack == NULL)
		return;
	runner = *stack;
	while (runner->next)
		runner = runner->next;
	while (runner)
	{
		if (!runner->next)
		{
			temp1 = runner->n;
			runner->n = (*stack)->n;
		}
		else
		{
			temp2 = runner->n;
			runner->n = temp1;
			temp1 = temp2;
		}
		runner = runner->prev;
	}
}
/**
 * _rotr - rotates the list right
 * @stack: pointer to the top of the stack
 * @line_number: the index of the current line
 *
 */
void _rotr(stack_t **stack,__attribute__ ((unused))unsigned int line_number)
{
	stack_t *runner;
	int temp1, temp2;

	if (*stack == NULL)
		return;

	runner = *stack;
	while (runner->next)
	{
		runner = runner->next;
		if (runner->next == NULL)
		{
			(*stack)->n = runner->n;
			runner->n = temp1;
		}
		else
		{
			if (runner->prev == *stack)
				temp1 = runner->prev->n;
			temp2 = runner->n;
			runner->n = temp1;
			temp1 = temp2;
		}

	}
}
