#include "main.h"
/**
 * read_textfile - prints text from a file
 *
 * @filename: name of the file
 * @letters: number of characters to read
 *
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	int fd;
	ssize_t written;
	char *buff;

	buff = malloc(sizeof(buff) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	count = read(fd, buff, letters);
	if (count == -1)
	{
		return (0);
	}

	written = write(STDOUT_FILENO, buff, count);
	if (written == -1)
	{
		return (0);
	}

	close(fd);
	return (count);
	free(buff);
}
