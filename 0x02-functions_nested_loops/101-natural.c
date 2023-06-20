#include <stdio.h>
#include "main.h"
/**
 * natural - Entry point
 * 
 * Return: Always integer (Success)
 */
int natural(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	putchar('\n');
	return (sum);
}
