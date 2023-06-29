#include "main.h"

/**
 * print_chessboard - print the chessboard
 *
 * @a: the matrix :)
 */

void print_chessboard(char (*a)[8])
{
	int columns = 0;
	int rows = 0;

	while (rows < 8)
	{
		columns = 0;
		while (columns < 8)
		{
			_putchar(a[rows][columns]);
			columns++;
		}
		_putchar('\n');
		rows++;
	}
}
