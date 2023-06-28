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
	int n;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
		n = i;
	}
	*(dest + n + 1) = '\0';
	return (dest);
}
