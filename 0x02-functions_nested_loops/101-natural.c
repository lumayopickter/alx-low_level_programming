#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int number, sum;

    sum = 0;
    for (number = 0; number < 1024; number++)
    {
        if (number % 3 == 0 || number % 5 == 0)
            sum += number;
    }

    printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);

    return 0;
}

