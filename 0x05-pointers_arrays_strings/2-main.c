#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This function serves as the entry point of the program. It demonstrates the
 * usage of the _strlen function by calculating the length of a string and
 * printing the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);

    return 0;
}

