#include "main.h"
#include <stdlib.h>
/**
 * _puts - prints a string to stdout.
 * @str : pointer to string.
 * Return: void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
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
 * print_number - Print an integer.
 * @n : integer.
 * Return: void.
 */
void print_number(unsigned long int n)
{
		int compteur = 0;
		unsigned long int power_10 = 1;
		int i;
		int digit = 0;
		unsigned long int copy_n = n;
		unsigned long int num = n;

		if (n == 0)
			_putchar(48);
		if (n < 0)
		{
			_putchar(45);
			num = -n;
			copy_n = -n;
		}
		while (copy_n != 0)
		{
			copy_n = copy_n / 10;
			compteur += 1;
		}
		for (i = 0; i < compteur - 1; i++)
			power_10 *= 10;
		while (num != 0)
		{
			if (num == power_10)
			{
				_putchar(49);
				for (i = 1; i < compteur; i++)
					_putchar(48);
				num = 0;
			}
			else
			{
				digit = 48 + num / power_10;
				_putchar(digit);
				num = num % power_10;
				power_10 /= 10;
			}
		}
}
/**
 * main - Entry point.
 * @argc : Number of arguments.
 * @argv : Pointer to array of arguments.
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		_puts("Error")
		exit(98);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!(argv[1][i] >= 48 && argv[1][i] <= 57))
		{
			_puts("Error");
			exit(98);
		}
	}
	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (!(argv[1][i] >= 48 && argv[1][i] <= 57))
		{
			_puts("Error");
			exit(98);
		}
	}
	print_number(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
