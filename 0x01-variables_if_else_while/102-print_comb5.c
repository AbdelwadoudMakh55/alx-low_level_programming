#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int n = 48;
	int track_last_comb = 1;

	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			if (!track_last_comb)
			{
				putchar(',');
				putchar(' ');
			}
			else
				track_last_comb = 0;
			putchar((char)n + i / 10);
			putchar((char)n + i % 10);
			putchar(' ');
			putchar((char)n + j / 10);
			putchar((char)n + j % 10);
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
