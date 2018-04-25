#include "monty.h"
/**
 *
 *
 */
void read_file(char *filename)
{
	char *buffer;
	char *line;
	size_t i;
	stack_t **stack;
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
		printf("%d\n", read);
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
		/*{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},*/
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
 * strcut - copies a slice of a string
 * @str: string to copy slice from
 * @beg: index to start slice from
 * @end: index to end slice at
 *
 * Return: returns a malloced char pointer or NUll on failure
 */
char *strcut(char *str, unsigned int beg, unsigned int end)
{
	unsigned int i, slice;
	char *cut;

	cut = malloc(sizeof(char) * (end - beg + 2));
	if (!cut)
		return (NULL);
	i = 0;
	slice = beg;
	while (slice <= end)
	{
		cut[i] = str[slice];
		slice++;
		i++;
	}
	cut[i] = '\0';
	return (cut);
}

/**
 *
 */
char *parse_line(char *line)
{
	char *opcode;
	char *push;
	const char *delim;

	delim = " ";
	push = "push";
	opcode = strtok(line, delim);

	if (strcmp(opcode, push) == 0)
		push_arg = atoi(strtok(NULL, delim));
	return (opcode);
}
