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
	int k = 0;
	int n = 48;

	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar((char)n + i);
				putchar((char)n + j);
				putchar((char)n + k);
				k++;
				if (n + i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
