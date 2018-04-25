#include "monty.h"
/**
 *
 *
 */
void read_file(char *filename, stack_t **stack)
{
	char *buffer = NULL;
	char *line;
	size_t i = 0;
	int line_count = 1;
	instruct_func s;
	int check;
	int read;
	FILE *file = fopen(filename, "r");

	if(file == NULL)
	{
		exit(-1);
	}
	while ((read = getline(&buffer, &i, file)) != -1)
	{
		line = parse_line(buffer);
		s = get_op_func(line);
		if (s == NULL)
			exit(-1);
		s(stack, line_count);
		line_count++;
	}

	check = fclose(file);
	if (check == -1)
		exit(-1);
	exit(1);
}
/**
 *
 *
 */
instruct_func get_op_func(char *str)
{
	int i;

	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"pchar", _pchar},
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

#include "monty.h"

/**
 *
 */
char *parse_line(char *line)
{
	char *op_code;
	char *push;

	push = "push";
	op_code = strtok(line, "\n ");

	if (strcmp(op_code, push) == 0)
		push_arg = atoi(strtok(NULL, "\n "));
	return (op_code);
}
