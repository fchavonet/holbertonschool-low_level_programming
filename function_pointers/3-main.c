#include <stdio.h>
#include <stdlib.h>

#include "3-calc.h"

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of character pointers listing all the arguments
 *
 * Return: 0 when the main fonction end
 */

int main(int argc, char *argv[])
{

	int result = 0;
	int a = 0;
	int b = 0;
	char *op = NULL;
	int (*op_func)(int, int) = NULL;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	op_func = (*get_op_func)(op);

	if (op_func == 0 || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((op[0] == '/' || op[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	{
		result = op_func(a, b);
		printf("%d\n", result);
	}
	return (0);
}
