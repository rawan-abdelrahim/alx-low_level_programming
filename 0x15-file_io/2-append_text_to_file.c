#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
		while (text_content[bytes_written])
			bytes_written++;

	if (write(fd, text_content, bytes_written) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
