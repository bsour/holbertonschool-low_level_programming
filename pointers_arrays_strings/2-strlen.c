#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char len = s[0];

	while (len != '\0')
	{
		sum++;
		len = s[i++];
	}
	return (sum);
}
