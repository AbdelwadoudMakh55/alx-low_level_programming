#include "main.h"
/**
 * _strcpy - Copy a string to a buffer.
 * @dest : pointer to a string.
 * @src : pointer to a string.
 * Return: string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
