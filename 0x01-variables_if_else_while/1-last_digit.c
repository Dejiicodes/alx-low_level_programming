#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Print the last digit of a random number.
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;
    int lastDigit; /* Declare lastDigit at the beginning */

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    lastDigit = n % 10; /* Calculate the last digit */

    printf("Last digit of %d is %d and is ", n, lastDigit);

    if (lastDigit > 5)
    {
        printf("greater than 5\n");
    }
    else if (lastDigit == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("less than 6 and not 0\n");
    }

    return (0);
}

