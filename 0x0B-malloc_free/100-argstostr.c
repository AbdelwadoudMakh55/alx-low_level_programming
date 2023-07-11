#include "main.h"
#include <stdlib.h>
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
 * argstostr - concatenates all the arguments of your program.
 * @ac : Number of arguments.
 * @av : Pointer to array of arguments.
 * Return: Pointer to new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int size_alloc = 0;
	char *conca;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; i++)
		size_alloc += _strlen(av[i]) + 1;
	conca = (char *)malloc(size_alloc + 1);
	if (conca == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			conca[index] = av[i][j];
			index++;
		}
		conca[index] = '\n';
		index++;
	}
	conca[index] = '\0';
	return (conca);
}
