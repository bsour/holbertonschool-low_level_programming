#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabets in lowercase
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}

	return (0);
}
