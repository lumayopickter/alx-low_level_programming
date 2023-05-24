#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program calls the add function
 *              to add two integers and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int result = add(89, 9);
    printf("%d\n", result);

    return 0;
}

