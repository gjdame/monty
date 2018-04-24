#include "monty.h"
/**
 *
 *
 */
int main(ac, av)
{
	if (av != 2)
	{
		exit(-1);
	}
	read_file(av[1]);
	return(0);
}
