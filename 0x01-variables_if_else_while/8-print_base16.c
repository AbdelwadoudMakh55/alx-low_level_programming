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
		i++;
		n++;
	}
	i = 0;
	n = 97;
	while (i < 6)
	{
		putchar((char)n);
		i++;
		n++;
	}
	putchar('\n');
	return (0);
}
