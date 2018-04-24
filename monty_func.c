#include "monty.h"
/**
 *
 *
 */
void read_file(char *filename)
{
	char *buffer;
	size_t i;
	int check;
	FILE *fp;

	fp = fopen(filename, 'r');
	if(fd == NULL)
		exit(-1);

	while ((read = getline(buffer, i, fp)) != -1)
	{
		printf("line of length %zu :\n", read);
		//parse line function//
		printf("%s", line);
	}

	check = fclose(fp);
	if (close == -1)
		exit(-1);
}
/**
 *
 *
 */
int get_op_func(char *str)
{
	int i;

	instructions_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL},
	};

	i = 0;
	while (instruct[i].f != NULL && strcmp(instruct[i].opcode, str) != 0)
	{
		i++;
	}

	return(instruct[i].f);
}
