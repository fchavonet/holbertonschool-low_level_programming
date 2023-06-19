#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 97;
	char ALPHABET = 65;

	/* Displays alphabet in lower case */
	for (alphabet = 97 ; alphabet <= 122 ; alphabet++)
	{
		putchar(alphabet);
	}

	/* Display ALPHABET in upper case */
	for (ALPHABET = 65 ; ALPHABET <= 90 ; ALPHABET++)
	{
		putchar(ALPHABET);
	}

	/* New line at the end */
	putchar('\n');
	return (0);
}
