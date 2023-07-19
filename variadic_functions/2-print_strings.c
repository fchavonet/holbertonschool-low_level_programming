#include <stdio.h>
#include <stdarg.h>

#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int index = 0;
	char *string = NULL;

	va_list args;

	va_start(args, n);

	for (; index < n ; index++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
		{
			printf("nil");
		}

		if (separator == NULL)
		{
			printf("%s", string);
		}
		else
		{
			printf("%s", string);

			if (index != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
