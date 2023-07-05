#include <stdio.h>
#include <stdlib.h>

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
	if (argc == 3)
	{

		long  multi_a = atoi(argv[1]);
		long  multi_b = atoi(argv[2]);

		long result = 0;

		result = multi_a * multi_b;

		printf("%d\n", result);
	}

	else
	{
		printf("Error");
	}

	return (0);

}
