#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n : integer
 * Return: Always void (Success)
 */
void print_to_98(int n)
{
	int i = 0;
	int track_last_num = 1;

	if (n >= 98)
	{
		while (n - i >= 98)
		{
			if (!track_last_num)
			{
				printf(", ");
			}
			else
				track_last_num = 0;
			printf("%d", n - i);
			i++;
		}
	}
	else
	{
		while (n + i <= 98)
		{
			if (!track_last_num)
			{
				printf(", ");
			}
			else
				track_last_num = 0;
			printf("%d", n + i);
			i++;
		}
	}
}
