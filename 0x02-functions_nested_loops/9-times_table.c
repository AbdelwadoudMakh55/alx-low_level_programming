#include "main.h"
/*
 * * times_table - Entry point
   *
   * Return: Always void (Success)
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int track_last_num = 1;

	while (i < 10)
	{
		while (j < 10)
		{
			if (i * j + 48 <= 57 && i * j + 48 >= 48)
			{
				if (!track_last_num)
				{
					_putchar(',');
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
				}
				else
					track_last_num = 0;
				_putchar((char)48 + i * j / 10);
				_putchar((char)48 + i * j % 10);
			}
			j++;
		}
		track_last_num = 1;
		_putchar('\n');
		j = 0;
		i++;
	}
}
