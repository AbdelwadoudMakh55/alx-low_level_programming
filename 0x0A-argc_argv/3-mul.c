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
 * main - Entry point.
 * @argc : Num of args.
 * @argv : Array of args.
 * Return: Multplication of 2 nums (args).
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
