#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 1;
	int r = 0;
	int i = 0;


	printf("%d, %d, ", a, b);

	for (i = 0 ; i < 50 ; i++)
	{

		r = a + b;
		printf("%d, ", r);

		a = r + b;
		printf("%d, ", a);

		b = r + a;
		printf("%d, ", b);

	}
	printf("\n");

	return (0);
}
