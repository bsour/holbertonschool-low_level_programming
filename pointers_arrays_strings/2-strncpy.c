#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the destination character
 * @src: pointer to the source
 * @n: number of characters to be copied
 * Return: zero
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = 1;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
