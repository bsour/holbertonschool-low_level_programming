#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s : the string to be printed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a, len;

	char *start, *finish = s;

	for (a = 0; s[a] != '\0' && s[a+1] != '\0'; a++)
	{
		finish++;
	}
	len = a + 1;
	start = s;

	for (a = 0; a < len / 2; a++)
	{
		char x;
		x = *finish;
		*finish = *start;
		*start = x;
		start++;
		finish--;
	}
	finish[len + 1] = '\0';
}
