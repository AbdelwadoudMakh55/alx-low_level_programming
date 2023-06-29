#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str : Pointer to string.
 * Return: Pointer to string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if ((int)*(str + i) <= 122 && (int)*(str + i) >= 97)
			*(str + i) -= 32;
	}
	return (str);
}
