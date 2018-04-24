#include "../monty.h"

int main(void)
{
	char *sentence, *op_code;

	sentence = "       push    0";
	op_code = parse_line(sentence);
	printf("Result should be: push\n");
	printf("%s\n", op_code);

	sentence = "       bl ah    0";
	op_code = parse_line(sentence);
	printf("Result should be: bl\n");
	printf("%s\n", op_code);

	sentence = "pint    0";
	op_code = parse_line(sentence);
	printf("Result should be: pint\n");
	printf("%s\n", op_code);


}
