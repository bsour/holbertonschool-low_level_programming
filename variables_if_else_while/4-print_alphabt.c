#include <stdio.h>

/**
 * main - print alphabets excluding q and e
 *
 * Return: 0 on success
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}

	putchar('\n');

	return (0);
}
