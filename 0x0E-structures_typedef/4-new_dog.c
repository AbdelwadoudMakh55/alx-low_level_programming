#include "dog.h"
/**
 * new_dog - Creates a new dog.
 * @name : Name of the dog (Pointer to string).
 * @age : Age of the dog (float).
 * @owner : Owner of the dog (Pointer to string).
 * Return: Variable of type dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New_Dog;
	if (New_Dog == NULL)
		return (0);
	(*New_Dog).name = name;
	(*New_Dog).age = age;
	(*New_Dog).owner = owner;
	return (New_Dog);
}
