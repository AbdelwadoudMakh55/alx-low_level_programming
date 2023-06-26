#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s : pointer to a string.
 * Return: length of string.
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
 * rev_string - reverse a string.
 * @s : pointer to a string.
 * Return: void.
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		char c;
		c = *(s + _strlen(s) - i - 1);
		*(s + _strlen(s) - i -1) = *(s + i);
		*(s + i) = c;
	}
}
