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
	int j = 0;

	while (haystack[i] != '\0')
	{

		j = 0;

		while (needle[j] != '\0' && haystack[i] == needle[j])
		{
			j++;

		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}

	return (0);
}
