#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: Pointer to the dog structure to free
 *
 * Description:
 *   This function frees the memory allocated for the dog structure,
 *   including the name and owner strings.
 *
 *   Note that if `d` is NULL, no action is performed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);   /* Free the name string */
	free(d->owner);  /* Free the owner string */
	free(d);         /* Free the dog structure */
}

