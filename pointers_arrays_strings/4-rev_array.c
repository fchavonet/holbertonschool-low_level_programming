#include "main.h"

/**
 * reverse_array - reverse the content of a
 *
 * @a: array of integer
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int index = 0;
	int temp = 0;

	for (index = n - 1 ; index >= n / 2 ; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
