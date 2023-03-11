#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	char text = 'z';

	while (text >= 'a')
	{
		putchar(text);
		text--;
	}
	putchar('\n');

	return (0);
}
