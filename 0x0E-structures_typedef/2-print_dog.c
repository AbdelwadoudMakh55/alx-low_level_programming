#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints a struct dog.
 * @d : Pointer to struct dog.
 * Return: Void.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, 
				(*d).owner);
}
