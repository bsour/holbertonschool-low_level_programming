#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to change the first letter of a word in uppercase
 *
 * Return: capitalizes letters
 */

char *cap_string(char *str)
{
	int i;
	int j;
	int cap = 32;
	int separators[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == separators[j])
			{
				j = 12;
				cap = 32;
			}
		}
	}
	return (str);
}
