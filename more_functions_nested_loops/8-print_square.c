#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *@size: s the size of the square
 */

void print_square(int size)
{

	int i, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1 ; i <= size ; i++)
	{
		for (j = 1 ; j <= size ; j++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}
