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
    if (!filename)
        return (-1);

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd < 0)
        return (-1);

    if (text_content)
    {
        int bytes_written = write(fd, text_content, strlen(text_content));
        if (bytes_written < 0)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
