#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program name
 *
 * @argc: number og arguments
 * @argv: array of character pointers listing all the arguments
 *
 * Return: 0 when the main fonction end
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}

	return (0);
}
