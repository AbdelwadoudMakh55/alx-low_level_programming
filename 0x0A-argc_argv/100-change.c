#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * @argc : number of arguments.
 * @argv : Array of args.
 * Return: minimum number of coins to make change for an amount of money.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int coins[5] = {25, 10, 5, 2, 1};
	int change = 0;
	int money = atoi(argv[1]);

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 0; money != 0; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (money >= coins[j])
				{
					change += money / coins[j];
					if (money % coins[j] == 0)
						money = 0;
					else
						money = money % coins[j];
				}
			}
		}
	}
	printf("%d\n", change);
	return (0);
}
