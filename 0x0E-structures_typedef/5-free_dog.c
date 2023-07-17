#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free the memory taken by a dog.
 * @d : Pointer to dog.
 * Return: Void (Free memory).
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).age);
	free((*d).owner);
	free(d);
}
