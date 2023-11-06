#include "main.h"

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the content of one file to another.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, or exit with error codes as specified.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r_bytes, w_bytes;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cd file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	error_file(fd_from, fd_to, av);

	while ((r_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);

		if (w_bytes != r_bytes)
			error_file(0, -1, av);
	}
	if (r_bytes == -1)
		error_file(-1, 0, av);

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
