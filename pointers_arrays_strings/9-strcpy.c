#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: This is the buffer pointed
 * @src: This need to be to copied
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *n = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
