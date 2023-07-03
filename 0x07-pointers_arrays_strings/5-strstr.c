#include "main.h"
/**
 * _strstr - Locate a substring.
 * @haystack : Pointer to string.
 * @needle : Pointer to string.
 * Return: Pointer to he beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		while (*(haystack + i) == *(needle + j) && *(needle + j) != '\0')
		{
			j++;
		}
		if (*(needle + j) == '\0')
			return (haystack + i - j + 1);
	}
	return (0);
}
