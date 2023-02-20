#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of a random number
 *
 * Return: (0) on sucess
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*code goes here */
	char first_message[] = "Last digit of";

	printf("%s %d is %d and is ", first_message, n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
