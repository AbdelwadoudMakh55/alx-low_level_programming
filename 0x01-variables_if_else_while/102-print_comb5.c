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
        int l = 0;
        int n = 48;

        while (i < 10)
        {
                while (j < 9)
                {
                	k = i;
                	while (k < 10)
                	{
                		l = j + 1;
                		while (l < 10)
                		{
                        	putchar((char)n + i);
                        	putchar((char)n + j);
                        	putchar(' ');
                        	putchar((char)n + k);
                        	putchar((char)n + l);
                        	l++;
                        	if (!(i == 9 && j == 8 && k == 9 && l == 9))
                        	{
                            	putchar(',');
                            	putchar(' ');
                        	}
                        }
                    	l = 0;
                    	k++;
                	}
                	k = 0;
                	j++;
            	}
            	j = 0 ;
		i++;
	}
		putchar('\n');
		return (0);
}
