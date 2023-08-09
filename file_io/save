#include "main.h"

/**
 * read_textfile -  read a text file and prints it to the POSIX standard output
 *
 * @filename: the file to read
 * @letters: the number of letters
 *
 * Return: the actual number of letters
 *         0 if the file is NULL or can not be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int file = 0;
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;

	char *file_content = NULL;

	file_content = malloc(letters);

	if (file_content == NULL)
		return (0);

	if (filename == NULL)
	{
		free(file_content);
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(file_content);
		return (0);
	}

	bytes_read = read(file, file_content, letters);

	bytes_written = write(STDOUT_FILENO, file_content, bytes_read);

	close(file);

	free(file_content);

	return (bytes_written);
}
