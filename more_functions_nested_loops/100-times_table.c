#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints th n times table, starting with 0
 *
 * @n: number of times table
 *
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0; j <= n ; j++)
			{
				int r = (i * j);

				if (j > 0)
				{
					if (r <= 9)
					{
						printf(" ");
					}

					if (r <= 99)
					{
						printf(" ");
					}

					if (r <= 999)
					{
						printf(" ");
					}
				}
				printf("%d", r);
				if (j < n)
				{
					printf(",");
				}
			}
			printf("\n");
		}
	}
}
