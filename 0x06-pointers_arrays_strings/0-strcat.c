#include "main.h"
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
 * _strcat - Concatenate two strings.
 * @dest : string.
 * @src : string.
 * Return: pointer to a string..
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;
	
	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + len + i) = *(src + i);
	*(dest + _strlen(dest)) = '\0';
	return (dest);
}
