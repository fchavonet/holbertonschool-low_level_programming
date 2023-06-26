#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 *
 * @a: is th array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int lenght = 0;

	while (a[lenght] != '\0')
	{
		lenght++;
	}

	for (lenght = 0 ; lenght < n ; lenght++)
	{
		printf("%d", a[lenght]);
		if (lenght != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
