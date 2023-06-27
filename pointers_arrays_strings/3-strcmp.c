#include "main.h"

/**
 * _strcmp - compare two strings
 *
 *@s1: first string to compare
 *@s2 : second string to compare
 *
 * Return: integer indicating the result of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int lenght = 0;

	while ((s1[lenght] != '\0') && (s2[lenght] != '\0'))
	{
		if (s1[lenght] - s2[lenght] != 0)
		{
			return (s1[lenght] - s2[lenght]);
		}
		lenght++;
	}

	return (0);
}
