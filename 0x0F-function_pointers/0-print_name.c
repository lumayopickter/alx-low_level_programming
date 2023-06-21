#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Calls the provided function to print the name.
 * @name: The name to be printed.
 * @f: A pointer to the function that prints the name.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

