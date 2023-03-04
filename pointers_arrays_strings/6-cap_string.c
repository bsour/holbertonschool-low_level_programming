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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - cap;
		}

		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (str[i] == separators[j])
			{
				j = 12;
				cap = 32;
			}
		}
	}
	return (str);
}
