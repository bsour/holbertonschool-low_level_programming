#include "main.h"
/**
 * create_file - creates a file and puts text in it
 * with 600 perms (do not change if it exists)
 *
 * @filename: name for file
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int ret;
	int len;

	if (!filename)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		ret = write(fd, text_content, len);
		if (ret < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
