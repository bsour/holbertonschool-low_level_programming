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
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		dest++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return dest;
}
