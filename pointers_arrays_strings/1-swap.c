#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: number to swap with b
 * @b: number to swap with a
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *b;
	*b = *a;
	*a = temp;
}
