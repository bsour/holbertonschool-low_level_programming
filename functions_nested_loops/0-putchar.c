#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar followed by a new line
 *
 * Returns: 0 on success
 *
 */

/**
 * print_char - print _printchar with a new line
 *
 * @text:  - the value to print
 */

void print_char(char *text)
{
	printf("%s\n", text);
}

int main(void)
{
	char text = "_putchar";

	print_char(text);

	return (0);
}
