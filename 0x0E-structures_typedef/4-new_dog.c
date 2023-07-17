#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - return the length of a string.
 * @s : pointer to a string.
 * Return: len; length of string str.
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
/**
 * _strcpy - Copy a string to a buffer.
 * @dest : pointer to a string.
 * @src : pointer to a string.
 * Return: string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
		n = i;
	}
	*(dest + n + 1) = '\0';
	return (dest);
}
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

	if (name != NULL && age >= 0 && owner != NULL)
		New_Dog = malloc(sizeof(dog_t));
	if (New_Dog == NULL)
		return (0);
	(*New_Dog).name = malloc(sizeof(char) * _strlen(name) + 1);
	if ((*New_Dog).name == NULL)
	{
		free(New_Dog);
		return (0);
	}
	(*New_Dog).owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if ((*New_Dog).owner == NULL)
	{
		free(New_Dog);
		return (0);
	}
	(*New_Dog).name = _strcpy((*New_Dog).name, name);
	(*New_Dog).age = age;
	(*New_Dog).owner = _strcpy((*New_Dog).owner, owner);
	return (New_Dog);
}























