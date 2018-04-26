#include "monty.h"
/**
 *
 *
 */
int push_arg = 0;

int main(int ac, char **av)
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		printf("USAGE: monty file\n");
		error_exit(&stack);
	}
	read_file(av[1], &stack);
	free_dlistint(stack);
	return(0);
}
