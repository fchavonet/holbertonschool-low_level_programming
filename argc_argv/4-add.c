#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	/**
	 * main - adds numbers
	 *
	 * @argc: number of arguments
	 * @argv: array of character pointers listing all the arguments
	 *
	 * Return: 0 when the main fonction end
	 */

	int index = 0;
	int result = 0;

	for (index = 1 ; index < argc ; index++)
	{

		if (argv >= '0' && argv[index] <= '9')
		{

			result = result + atoi(argv[index]);
		}
		else
		{
			return (0);
		}

		printf("%d\n", result);

		return (0);
	}
}
