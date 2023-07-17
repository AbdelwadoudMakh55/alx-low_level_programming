#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d : Pointer to struct dog.
 * @name : The name of the dog (Pointer to string).
 * @age : Age of the dog (float).
 * @owner : The owner of the dog (Pointer to string).
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
