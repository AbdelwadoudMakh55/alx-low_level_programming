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
	int n = 48;

	while (i < 10)
	{
        	putchar((char)n);
		n++;
		i++;
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
        return (0);
}
