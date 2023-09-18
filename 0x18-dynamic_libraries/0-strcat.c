#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenate two strings.
 * @dest : string.
 * @src : string.
 * Return: pointer to a string..
 */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + len + i) = *(src + i);
	*(dest + strlen(dest)) = '\0';
	return (dest);
}
