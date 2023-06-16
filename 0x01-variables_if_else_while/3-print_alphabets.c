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
	int n = 97;
	int m = 65;
	while (i < 26)
	{
		putchar((char)n);
		n++;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		putchar((char)m);
		m++;
		i++;
	}
	putchar('\n');
	return (0);
}
