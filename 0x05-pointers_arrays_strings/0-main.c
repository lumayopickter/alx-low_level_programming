#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This function serves as the entry point of the program. It demonstrates the
 * usage of the reset_to_98 function by updating the value of an integer.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    n = 402;
    printf("n = %d\n", n);
    reset_to_98(&n);
    printf("n = %d\n", n);

    return 0;
}

