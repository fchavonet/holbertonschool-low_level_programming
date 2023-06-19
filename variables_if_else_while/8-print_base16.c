#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers = 0;
	char letters = 0;

	for (numbers = 48; numbers < 57 ; numbers++)
	{
		putchar(numbers);
	}
	for (letters = 'a' ; letters <= 'f' ; letters++)
	{
		putchar(letters);
	}

	/* New line at the end */
	putchar('\n');

	return (0);
}
