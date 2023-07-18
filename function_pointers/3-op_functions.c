#include <stdlib.h>
#include <stdio.h>

#include "3-calc.h"


/**
 * op_add - a function that adds two numbers (int)
 *
 * @a: first number (int)
 * @b: second number (int)
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - a function that substract two numbers (int)
 *
 * @a: first number (int)
 * @b: second number (int)
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - a function that multiplies two numbers (int)
 *
 * @a: first number (int)
 * @b: second number (int)
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - a function that divides two numbers (int)
 *
 * @a: first number (int)
 * @b: second number (int)
 *
 * Return: the result of a divided by b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - a function that gives remainder
 * of the division of two numbers (int)
 *
 * @a: first number (int)
 * @b: second number (int)
 *
 * Return: the remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
