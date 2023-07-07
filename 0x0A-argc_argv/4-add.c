#include "main.h"
#include <stdio.h>
/**
 * _atoi - Convert string to int.
 * @s : pointer to string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int j = 0;
	int k = 0;
	int minus_count = 0;
	int track_last_digit = 0;
	int number = 0;
	int num = 0;

	while (!((int)*(s + j) <= 57 && (int)*(s + j) >= 48) && *(s + j) != '\0')
	{
		if ((int)*(s + j) == 45)
			minus_count += 1;
		j++;
	}
	while (*(s + k) != '\0')
	{
		if ((int)*(s + k) <= 57 && (int)*(s + k) >= 48)
		{
			num = (int)*(s + k) - 48;
			if (minus_count % 2 != 0)
				num = -1 * ((int)*(s + k) - 48);
			number = number * 10 + num;
			if (track_last_digit != 1)
				track_last_digit = 1;
		}
		else if (track_last_digit == 1)
			break;
		k++;
	}
	return (number);
}
/**
 * main - adds positive numbers.
 * @argc : num of args.
 * @argv : Pointer to array of args.
 * Return: Addition of arguments.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	for (i = 1; i < argc - 1; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (i = 1; i <= argc - 1; i++)
		sum += _atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
