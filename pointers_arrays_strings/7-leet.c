#include "main.h"

/**
 * leet - Entry point
 *
 * @n: input
 * Return: Always 0 (Success)
 */

char *leet(char *n)
{
	int i;
	int j;
	int letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacement[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == letters[j])
			{
				n[i] = replacement[j / 2];
				j = 9;
			}
		}
	}
	return (n);
}
