#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the usage of the `struct dog` type.
 *              It creates a dog named "Poppy" with an age of 3.5 years
 *              and an owner named "Bob". It then prints the dog's name and age.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	return (0);
}

