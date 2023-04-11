#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or an exit status on failure
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	int r_count;
	int w_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprint(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do
	{
		r_count = read(fd_from, buffer, BUFFER_SIZE);
		if (r_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		w_count = write(fd_to, buffer, r_count);
		if (w_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	while (r_count > 0);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
