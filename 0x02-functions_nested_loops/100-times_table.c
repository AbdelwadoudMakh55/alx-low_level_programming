#include "main.h"
#include <stdlib.h>
/**
 * print_times_table - Entry point
 * @n : integer
 * Return: Always void (Success)
 */
void print_times_table(int n)
{
	int i;
	int j;
	int track_last_num = 1;

	if (n < 0 || n >= 15)
		exit(0);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (48 + i * j <= 57 && 48 + i * j >= 48)
			{
				if (!track_last_num)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else
					track_last_num = 0;
				_putchar((char)48 + i * j);
			}
			else
			{
				if (!track_last_num)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
					track_last_num = 0;
				_putchar((char)48 + i * j / 10);
				_putchar((char)48 + i * j % 10);
			}
		}
		track_last_num = 1;
		j = 0;
		_putchar('\n');
	}
}
