#include <stdio.h>
#include <stdlib.h>  /* Include the stdlib.h header for the free function */
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free(my_dog->name);  /* Free the dynamically allocated memory */
    free(my_dog);  /* Free the dog structure */
    return (0);
}

