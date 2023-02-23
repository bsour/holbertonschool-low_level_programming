#include <stdio.h>
#include "main.h"

/**
 * print_char - print the assigned value with a new line
 *
 * @text: - the parameter where the value will be assigned
 */

void print_char(char *text)
{
	printf("%s\n", text);
}

/**
 * main - prints _putchar with a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	char *text = "_putchar";

	print_char(text);

	return (0);
}
