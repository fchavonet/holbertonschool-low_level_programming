#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to the newly allocated space containing
 *                 the concatenation of s1 and s2, or NULL on failure
 */

int **alloc_grid(int width, int height)
{

	int **array = NULL;
	int index = 0;
	int row = 0;
	int column = 0;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < height; index++)
	{
		array[index] = malloc(sizeof(int) * width);

		if (array[index] == NULL)
		{
			while (index--)
			{
				free(array[index]);
			}

			free(array);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			array[row][column] = 0;
		}
	}
					
	return (array);

}
