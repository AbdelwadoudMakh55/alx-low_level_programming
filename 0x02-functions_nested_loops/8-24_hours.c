#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always void (Success)
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int n = 48;

	while (i < 24)
	{
		while (j < 60)
		{
			_putchar((char)n + i / 10);
			_putchar((char)n + i % 10);
			_putchar(':');
			_putchar((char)n + j / 10);
			_putchar((char)n + j % 10);
			_putchar('\n');
			j++;
		}
		j = 0;
		i++;
	}
}
