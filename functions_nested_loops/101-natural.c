#include <stdio.h>

/**
 * main - enter point of the programm
 *
 * Return: 0 if programm works
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 1 ; i <= 1024 ; i++)

	{
		if (((i % 3) == 0) || ((i % 5) == 0) || ((i % 6) == 0) || ((i % 9) == 0))
		{

			sum += i;

		}

	}

	printf("%d\n", sum);

	return (0);
}
