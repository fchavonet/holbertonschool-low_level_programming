/**
 * _strncpy - copies of  a string
 *
 * @dest: destination of the copy
 * @src: Source of the copy
 * @n: number of bytes to copy
 *
 * Return: return dest with the copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i]	= src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
