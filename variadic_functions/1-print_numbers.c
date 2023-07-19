#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	unsigned int num = 0;

	va_list args;

	va_start(args, n);

	for (; index < n ; index++)
	{
		num = va_arg(args, int);

		if (separator == NULL)
		{
			printf("%d", num);
		}

		printf("%d", num);

		if (index != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
