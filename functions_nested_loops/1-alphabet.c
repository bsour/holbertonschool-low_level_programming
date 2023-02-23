#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_a_z - to print a-z in lowercase
 *
 */

void print_a_z(void)
{
	int x;
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(tolower(x));
	}

/**
 * main - calls the function
 *
 * Return: 0 on success
 */

int main(void)
{
	print_a_z();

	return (0);

}
