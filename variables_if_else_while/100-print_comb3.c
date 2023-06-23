#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 if programm works
 */

int main(void)
{
	int number1 = 0;
	int number2 = 0;

	for (number1 = 0; number1 <= 9; number1++)
	{
		for (number2 = number1 + 1; number2 <= 9; number2++)
		{
			putchar(number1 + '0');
			putchar(number2 + '0');

			if ((number1 != 8) || (number2 != 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

