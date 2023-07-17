#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free the memory taken by a dog.
 * @d : Pointer to dog.
 * Return: Void (Free memory).
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			free((*d).name);
		if ((*d).owner)
			free((*d).owner);
		free(d);
	}
}
