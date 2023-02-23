#include "main.h"
#include <ctype.h>

/**
 * print_a_z - to print a-z in lowercase
 *
 */

void print_a_z(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
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
