#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file to create
 * @text_content: content to write into the file
 *
 * Return: 1 on success
 *        -1 on failure
 *        empty file if @text_content is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	int bytes_written = 0;
	int length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_APPEND | O_WRONLY, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	bytes_written = write(file_descriptor, text_content, length);

	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
