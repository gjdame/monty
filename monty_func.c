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
	int read;
	FILE *file = fopen(filename, "r");

	if(file == NULL)
		exit(-1);

	while ((read = getline(&buffer, &i, file)) != -1)
	{
		//parse line function//
		;
	}

	check = fclose(file);
	if (check == -1)
		exit(-1);
}
/**
 *
 *
 */
int get_op_func(char *str)
{
	int i;

	instruction_t instruct[] = {
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
	unsigned int i, j;
	char *token;

	i = 0;
	token = malloc(sizeof(char *) * 2);
	if (!token)
		return (NULL);

	while (line[i])
	{
		if (line[i] == ' ')
		{
			i++;
			continue;
		}
		else
		{
			j = 0;
			while (line[i + j + 1] != ' ')
				j++;
			token = strcut(line, i, i + j);
			return (token);
		}
		i++;

	}
	return (NULL);
}
