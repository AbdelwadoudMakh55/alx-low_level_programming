#include "main.h"
/* * times_table - Entry point  * Return: Always void (Success) */
void times_table(void){
	int i = 0;
	int j = 0;
	int n = 48;
	int track_last_num = 1;

	while (i < 10)
	{
		while (j < 10)
		{
			if (i * j + n <= 57 && i * j + n >= 48)
			{
				if (!track_last_num)
				{
					_putchar(',');_putchar(' ');_putchar(' ');
				}
				else
					track_last_num = 0;
				_putchar((char)n + i * j);
			}
			else
			{
				if (!track_last_num)
				{
					_putchar(',');_putchar(' ');
				}
				else
					track_last_num = 0;
				_putchar((char)n + i * j / 10);_putchar((char)n + i * j % 10);
			}
			j++;
		}
		track_last_num = 1;
		_putchar('\n');
		j = 0;
		i++;
	}
}
