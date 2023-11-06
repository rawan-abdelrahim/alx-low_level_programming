#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read, n_written;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters);

	if (!buffer)
	{
		close(fd);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	n_written = write(STDOUT_FILENO, buffer, n_read);

	free(buffer);
	close(fd);
	return (n_written);
}
