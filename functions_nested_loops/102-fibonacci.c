#include <stdio.h>

/**
 * main - print the Fibonacci number until 50 items
 *
 * Return: Always 0 if programme is good
 */

int main(void)
{
	long a = 0;
	long b = 1;
	int i = 0;

	for (i = 0 ; i < 25 ; i++)
	{
		a = a + b;

		printf("%lu", a);

		if (i < 25)
		{
			printf(", ");
		}

		b = a + b;
		printf("%lu", b);

		if (i < 24)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
