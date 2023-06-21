#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: n is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			if (i == j)
			{
				_putchar(92);
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}

