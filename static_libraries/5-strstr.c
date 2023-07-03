#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack : string to test
 * @needle : reference string
 *
 * Return: needle if haystack content == needle content
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{

		i = 0;

		while ((needle[i] != '\0') && (haystack[i] == needle[i]))
		{
			i++;

		}

		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (0);
}
