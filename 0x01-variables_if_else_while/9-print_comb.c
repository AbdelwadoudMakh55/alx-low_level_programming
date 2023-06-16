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

        while (i < 10)
        {
		while (j < 10)
		{
        	putchar((char)n+i);
        	putchar((char)n+j);
        	putchar(',');
        	putchar(' ');
        	}
        	j++;
    		}
    		j = 0;
    		i++;
    	}
        return (0);
}
