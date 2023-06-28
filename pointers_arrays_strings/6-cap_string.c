#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
				 (str[index -1]) == '\t' ||
				 (str[index -1]) == '\n' ||
				 (str[index -1]) == ',' ||
				 (str[index -1]) == (';') ||
				 (str[index -1]) == ('.') ||
				 (str[index -1]) == '!' ||
				 (str[index -1]) == '?' ||
				 (str[index -1]) == '"' ||
				 (str[index -1]) == '(' ||
				 (str[index -1]) == ')' ||
				 (str[index -1]) == '{' ||
				 (str[index -1]) == ('}') ||
				 (index == 0))
				{
					(str[index]) -= 32;
				}
		}
		index++;
	}

	return (str);
}
