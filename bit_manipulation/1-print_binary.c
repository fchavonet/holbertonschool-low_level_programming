#include "main.h"

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to convert and print
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int found_one = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			found_one = 1;
		}
		else if (found_one)
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}

