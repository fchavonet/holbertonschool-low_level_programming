#include "main.h"

/**
 * more_numbers - prints 10 times 0 to 14
 */

void more_numbers(void)
{
	int i = 0;
	int n = 0;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');

			}
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}

