#include "main.h"

/**
 * read_textfile -  read a text file and prints it to the POSIX standard output
 *
 * @filename: the file to read
 * @letters: the number of letters
 *
 * Return: the actual number of letters written to standard output
 *         0 if the file is NULL or cannot be opened, read, or written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read;
	ssize_t bytes_written;
	char *file_content;
	int file;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	file_content = malloc(letters);
	if (file_content == NULL)
	{
		close(file);
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
	if (bytes_written == -1)
	{
		free(file_content);
		close(file);
		return (0);
	}

	close(file);
	free(file_content);

	return (bytes_written);
}

