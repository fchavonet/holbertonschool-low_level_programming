#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{

	int a = 0;
	int b = 0;
	int x = 0;

	for (a = 0 ; a < 10 ; a++)
	{
		_putchar('0');

		for (b = 1 ; b < 10 ; b++)
		{
			_putchar(',');
			_putchar(' ');

			x = (a * b);

			if (x <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}


