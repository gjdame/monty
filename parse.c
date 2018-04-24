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
