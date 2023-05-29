#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This function serves as the entry point of the program. It demonstrates the
 * usage of the swap_int function by swapping the values of two integers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a = %d, b = %d\n", a, b);
    swap_int(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

