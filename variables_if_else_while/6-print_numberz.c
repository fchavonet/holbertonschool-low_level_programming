#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Variable declaration, use of ASCII */
	int numbers = 48;
	
	/* Print all number iclude 9 (57) */
	for (; numbers <= 57 ; numbers++)
	{
		putchar(numbers);
	}

	/* New line at the end */
	putchar('\n');

	return (0);
}
