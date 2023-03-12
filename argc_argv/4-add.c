#inlcude "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return 1;
}

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_digit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return 1;
		}
	}
	printf("%d\n", sum);

	return (0);
}
