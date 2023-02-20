#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase followed by a new line
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
