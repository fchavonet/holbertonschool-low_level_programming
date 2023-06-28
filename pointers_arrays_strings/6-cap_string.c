#include "main.h"

/**
 * cap_string - capitalize all words of the string
 * @str: string to capitalize
 * Return: the string after capitalize
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if
				((str[index - 1]) == ' ' ||
				 (str[index - 1]) == '\t' ||
				 (str[index - 1]) == '\n' ||
				 (str[index - 1]) == ',' ||
				 (str[index - 1]) == (';') ||
				 (str[index - 1]) == ('.') ||
				 (str[index - 1]) == '!' ||
				 (str[index - 1]) == '?' ||
				 (str[index - 1]) == '"' ||
				 (str[index - 1]) == '(' ||
				 (str[index - 1]) == ')' ||
				 (str[index - 1]) == '{' ||
				 (str[index - 1]) == ('}') ||
				 (index == 0))
				{
					(str[index]) -= 32;
				}
		}
		index++;
	}

	return (str);
}
