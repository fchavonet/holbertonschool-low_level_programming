#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{

	int a = 0;
	int b = 0;
	int x = 0;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			x = (a * b);

			if ((x / 10) > 0)
			{
				_putchar((x / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((x % 10) + '0');

			if (b < 9) && (b > 0);
			{
				_putchar(',');
				_putchar(' ');
			}

			if (b >= 9)
			{
				_putchar('\n');
			}
		}
	}
}
