#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabets in lowercase and uppercase
 *
 * Return: 0 on success
 */

int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	x = 'A';

	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
