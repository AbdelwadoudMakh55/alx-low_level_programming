#include "main.h"
#include <stdlib.h>
/**
 * _strlen - return the length of a string.
 * @s : pointer to a string.
 * Return: len; length of string str.
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;
	unsigned int len = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1 : Pointer to first string.
 * @s2 : Pointer to second string.
 * @n : Number of chars from s2.
 * Return: Pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *n_string;
	unsigned int i, j;
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	if (n >= len2)
		n = len2;
	n_string = malloc(sizeof(char) * (len1 + n + 1));
	if (n_string == NULL)
		return (0);
	for (i = 0; i < len1; i++)
		n_string[i] = s1[i];
	for (j = 0; j < n; j++)
		n_string[i + j] = s2[j];
	n_string[i + j] = '\0';
	return (n_string);
}
