#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: the width of the 2D array
 * @height: the height of the array
 *
 * Return: the array with the good value
 */

int **alloc_grid(int width, int height)
{

	int **array = NULL;
	int index = 0;
	int row = 0;
	int column = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	array = malloc(sizeof(*array) * height);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		array[index] = malloc(sizeof(int) * width);

		if (array[index] == NULL)
		{
			while (index--)
				free(array[index]);

			free(array);

			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
		for (column = 0; column < width; column++)
			array[row][column] = 0;

	return (array);

}
