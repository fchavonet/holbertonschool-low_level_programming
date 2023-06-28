#include "main.h"

char *_strchr(char *s, char c)
{

	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		index++;
	}

	return (0);
}
