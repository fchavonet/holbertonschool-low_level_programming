#include <stdio.h>
#include <stdlib.h>

#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: the string with the name to print
 * @f: function pointer that takes a string argument
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
