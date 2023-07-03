#include "main.h"

/**
 * pnumber - check if a number is prime
 *
 * @result: the number to check for primality
 * @divisor: the divisor to check if it divides the number evenly
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int pnumber(int result, int divisor)
{
	if (divisor * divisor > result)
	{
		return (1);
	}
	else if (result % divisor == 0)
	{
		return (0);
	}
	else
	{
	return (pnumber(result, divisor + 1));
	}
}

/**
 * is_prime_number - check if a number is prime
 *
 * @n: the number to check for primality
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (pnumber(n, 2));

}
