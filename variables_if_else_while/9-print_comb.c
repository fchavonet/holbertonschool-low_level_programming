#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers = 0;

	/* Display numbers 0 to 9 */
	for (numbers = 48; numbers <= 57 ; numbers++)
	{
		/* Used ',' and ' ' before 9 number */
		putchar(numbers);
		if (numbers < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	/* New line at the end */
	putchar('\n');

	return (0);
}
