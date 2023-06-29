#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a matrix (square)
 *
 * @a: enter the matrix :D
 * @size: the size of the square
 *
 */

void print_diagsums(int *a, int size)
{

	int column = 0;
	int row = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (row < size)
	{
		sum1 += *(a + row * size + column);
		sum2 += *(a + row * size + (size - 1 - column));
		column++;
		row++;
	}

	printf("%d, %d\n", sum1, sum2);

}
