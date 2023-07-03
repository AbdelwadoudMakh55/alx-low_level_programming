#include "main.h"
#include <stdio.h>
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
 * _strstr - Locate a substring.
 * @haystack : Pointer to string.
 * @needle : Pointer to string.
 * Return: Pointer to he beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (*(needle + i) != '\0')
	{
		while (*(haystack + j) != '\0')
		{
			if (*(needle + i) == *(haystack + j))
			{
				count += 1;
				break;
			}
			j++;
		}
		i++;
	}
	if (count == _strlen(needle))
		return (haystack + j - count + 1);
	return (0);
}
