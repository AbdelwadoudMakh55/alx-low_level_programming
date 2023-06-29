#include "main.h"
#include <stdio.h>
/**
 * leet - 1337 encoding.
 * @s : pointer to string.
 * Return: Pointer to string.
 */
char *leet(char *s)
{
	int i;
	int j;
	char leet_char[5] = {'A', 'E', 'O', 'T', 'L'};
	char leet_num[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == leet_char[j] || *(s + i) == leet_char[j] - 32
			|| *(s + i) == leet_char[j] + 32)
			{
				*(s + i) = leet_num[j];
				break;
			}
		}
	}
}
