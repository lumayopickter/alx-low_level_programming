#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_length, owner_length;

	/* Check if name and owner are not NULL */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Calculate the length of name and owner */
	name_length = strlen(name) + 1;
	owner_length = strlen(owner) + 1;

	/* Allocate memory for the name and owner copies */
	name_copy = malloc(name_length * sizeof(char));
	owner_copy = malloc(owner_length * sizeof(char));
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name and owner to the new memory locations */
	strncpy(name_copy, name, name_length);
	strncpy(owner_copy, owner, owner_length);

	/* Assign the name, age, and owner to the new dog */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

