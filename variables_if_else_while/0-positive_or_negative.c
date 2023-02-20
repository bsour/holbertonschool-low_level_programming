#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determines if a random number n is positive , negative or zero.
 * 
 * return - returns 0 if program is successful;
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* place your code here */
    if (n < 0)
    {
        printf("%d is %s\n", "negative");
    }
    else if (n > 0)
    {
        printf("%d is %s\n", "positive");
    }
    else
    {
        printf("%d is %s\n", "zero");
    }
    return (0);
}
