#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int length = 0;
	int a = 0;
	int b = 0;
	char temp = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	/* Après cette étape, length = 9 si s = My School */

	for (a = 0, b = length - 1 ; a <= (length / 2) ; a++, b--)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}
	_putchar('\n');
}
