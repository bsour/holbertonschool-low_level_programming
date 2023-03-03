#include "main.h"

/**
 * _strcat - a fucntion that concatenates two strings
 *
 * @src: teh string to be appended
 * @dest: the other string
 * Return: pointer to the resulting string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
