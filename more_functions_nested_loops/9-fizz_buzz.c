#include <stdio.h>

/**
 * main - Fizz-Buzz
 *
 * Return: 0 if the code works well
 */

int main(void)
{

	int i = 0;
	int multipl3 = 0;
	int multipl5 = 0;

	for (i = 1 ; i <= 100 ; i++)
	{

		multipl3 = i % 3;
		multipl5 = i % 5;

		if ((multipl3 == 0) && (multipl5 == 0))
		{
			printf("FizzBuzz");
		}

		else if (multipl3 == 0)
		{
			printf("Fizz");
		}

		else if (multipl5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
		printf(" ");
		}
	}
	printf("\n");

	return (0);
}
