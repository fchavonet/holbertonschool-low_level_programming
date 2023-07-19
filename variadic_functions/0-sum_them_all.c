#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n: last fix parameter of the function
 *
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index = 0;
	unsigned int num = 0;
	unsigned int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	while (index < n)
	{
		num = va_arg(args, int);
		sum = sum + num;
		index++;
	}

	va_end(args);

	return (sum);
}
