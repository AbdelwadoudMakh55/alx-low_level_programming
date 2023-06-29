#include "main.h"
/**
 * cap_string - Capitalize words of a string.
 * @str : Pointer to string.
 * Return: Pointer to string.
 */
char *cap_string(char *str)
{
	int i;

	if (*str <= 122 && *str >= 97)
		*str -= 32;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if ((*(str + i) == ' ' || *(str + i) == '.' || *(str + i) == ','
		|| *(str + i) == ';' || *(str + i) == '!' || *(str + i) == '?'
		|| *(str + i) == '"' || *(str + i) == '(' || *(str + i) == ')'
		|| *(str + i) == '{' || *(str + i) == '}' || *(str + i) == '\n'
		|| *(str + i) == '\t')
		&& (*(str + i + 1) <= 122 && (int)*(str + i + 1) >= 97))
			*(str + i + 1) -= 32;
	}
	return (str);
}
