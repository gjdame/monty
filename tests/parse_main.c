#include "../monty.h"
int push_arg = 0;

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
int main(void)
{
	char *s1, *s2, *s3, *op_code;

	s1 = strdup("       push    78");
	op_code = parse_line(s1);
	printf("Result should be: push\n");
	printf("%s\n", op_code);
	printf("It's push so the value of push_arg is:\n");
	printf("%d\n", push_arg);

	s2 = strdup("       bl ah    0");
	op_code = parse_line(s2);
	printf("Result should be: bl\n");
	printf("%s\n", op_code);

	s3 = strdup("pint    0");
	op_code = parse_line(s3);
	printf("Result should be: pint\n");
	printf("%s\n", op_code);

	free(s1);
	free(s2);
	free(s3);

	return (EXIT_SUCCESS);
}
