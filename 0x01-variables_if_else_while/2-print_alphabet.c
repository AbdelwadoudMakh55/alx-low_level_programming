#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i=0;

	int n=97;

	while (i < 26)
	{
		putchar(char(n));
		n++;
		i++;
	}
	return (0);
}
