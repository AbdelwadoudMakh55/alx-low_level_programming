#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar((char)48 + j / 10);
			_putchar((char)48 + j % 10);
		}
		_putchar('\n');
	}
}
