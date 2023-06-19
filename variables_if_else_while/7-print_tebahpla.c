#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 122;

	/* Displays alphabet in lower case */
	for (alphabet = 122 ; alphabet >= 97 ; alphabet--)
	{
		putchar(alphabet);
	}

	/* New line at the end */
	putchar('\n');
	return (0);
}
