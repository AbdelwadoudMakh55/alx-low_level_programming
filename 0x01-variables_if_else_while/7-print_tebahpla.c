#include <stdio.h>
#include <stdlib>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int n = 122;

	while (i < 26)
	{
		putchar((char)n);
		i++;
		n--;
	}
	putchar('\n');
	return (0);
}
