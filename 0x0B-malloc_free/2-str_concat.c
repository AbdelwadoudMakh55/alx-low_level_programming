#include "main.h"
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
 * str_concat - concatenates two strings.
 * @s1 : Pointer to first string.
 * @s2 : Pointer to second string.
 * Return: Pointer to new string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *conca;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	conca = (char *)malloc(_strlen(s1) + _strlen(s2) + 1);
	if (conca == NULL)
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
		conca[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		conca[i + j] = s2[j];
	conca[i + j] = '\0';
	return (conca);
}
