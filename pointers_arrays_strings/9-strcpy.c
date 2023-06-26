#include "main.h"

/**
 * *_strcpy - copie string ponted to by src
 *
 * @dest: destination variable to copy
 * @src: variable to copy
 *
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int lenght = 0;

	while (src[lenght])
	{
		dest[lenght] = src[lenght];
		lenght++;
	}

	return (dest);
}
