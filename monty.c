#include "monty.h"
/**
 *
 *
 */
int push_arg = 0;

int main(int ac, char **av)
{
	if (ac != 2)
	{
		exit(-1);
	}
	read_file(av[1]);
	return(0);
}
