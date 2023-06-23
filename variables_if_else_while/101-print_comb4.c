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
	int number3 = 0;

	for (number1 = 0 ; number1 <= 9 ; number1++)
	{
		for (number2 = number1 + 1 ; number2 <= 9 ; number2++)
		{
			for (number3 = number2 + 1 ; number3 <= 9 ; number3++)
			{
				putchar(number1 + '0');
				putchar(number2 + '0');
				putchar(number3 + '0');

				if (number1 != 7 || number2 != 8 || number3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

