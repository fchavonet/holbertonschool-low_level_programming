#include "main.h"

/**
 * read_textfile - function that reads a text file
 *                 and prints it to the POSIX standard output
 *
 * @filename: the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 *         0 if filename is NULL or if any error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0;
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;
	char *file_content = NULL;

	if (filename == NULL)
		return (0);

	file_content = malloc(letters);
	if (file_content == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(file_content);
		return (0);
	}

	bytes_read = read(file, file_content, letters);
	if (bytes_read == -1)
	{
		free(file_content);
		close(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, file_content, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(file_content);
		close(file);
		return (0);
	}

	close(file);
	free(file_content);

	return (bytes_written);
}

