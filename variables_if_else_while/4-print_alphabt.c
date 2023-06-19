#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 97;

	/* Display alphabet in lower case */
	for (alphabet = 97 ; alphabet <= 122 ; alphabet++)
	{
		/*Except q (101) and e (113) */
		if (alphabet != 101 && alphabet != 113)
		{
			/* Print the alphabet without q an e */
			putchar(alphabet);
		}
	}

	/* New line at the end */
	putchar('\n');

	return (0);
}
