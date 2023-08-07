#include "main.h"

/**
 * create_file - creates a file and writes the specified content to it
 *
 * @filename: name of the file to create
 * @text_content: content to write into the file
 *
 * Return: 1 on success
 *        -1 on failure
 *        empty file if @text_content is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	int bytes_written = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	bytes_written = write(file_descriptor, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}

