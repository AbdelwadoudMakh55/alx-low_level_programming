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

	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar((char)n + i);
			putchar((char)n + j);
			j++;
			if (n + i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		j = 0;
		n = 48;
		i++;
	}
	putchar('\n');
	return (0);
}			
