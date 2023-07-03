#include "main.h"
/**
 * set_string - sets the value of a pointer to a char.
 * @s : Pointer to pointer to string.
 * @to : Pointer to string.
 * Return: Void. (Turn Pointer to char).
 */
void set_string(char **s, char *to)
{
	*s = to;
}
