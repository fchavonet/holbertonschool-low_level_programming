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

char *str_concat(char *s1, char *s2)
{
	int size_s1, size_s2;
	char *result = NULL;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size_s1] != '\0')
	{
		size_s1++;
	}

	while (s2[size_s2] != '\0')
	{
		size_s2++;
	}

	result = malloc((size_s1 + size_s2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		result[i] = s1[i];

	for (j = 0; j < size_s2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
