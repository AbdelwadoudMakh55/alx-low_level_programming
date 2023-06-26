#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s : pointer to a string.
 * Return : length of string.
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
