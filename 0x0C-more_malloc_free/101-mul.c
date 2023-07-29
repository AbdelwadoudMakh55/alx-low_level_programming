#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - return the length of a string.
 * @s : pointer to a string.
 * Return: len; length of string str.
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
/**
 * add_zeros - Initial an array with zeros.
 * @array : Array of integers.
 * @size : Size of array.
 * Return: Void.
 */
void add_zeros(int *array, int size)
{
	int i;

	for (i = 0; i < size; i++)
		array[i] = 0;
}
/**
 * print_array - Print an array of integers.
 * @array : Array of integers.
 * @size : Size of array.
 * Return: Void.
 */
void print_array(int *array, int size)
{
	int i;

	for (i = size; i >= 0; i--)
	{
		if (array[i] > 0 && array[i] < 10)
			break;
	}
	for (; i >= 0; i--)
		printf("%d", array[i]);
}
/**
 * check_digits - Check if a string has chars other then digits.
 * @num : Array of chars.
 * Return: 1 if num has only digits, 0 if not.
 */
int check_digits(char *num)
{
	int result = 1;
	int i = 0;

	if (num[i] == '-')
		i++;
	for (; num[i] != '\0'; i++)
	{
		if (!(num[i] >= 48 && num[i] <= 57))
		{
			result = 0;
			break;
		}
	}
	return (result);
}
/**
 * mulriplication - Turn 2 arrays of chars (digits) to array of ints
 * and multiply them.
 * @product : Array.
 * @num1 : Array of ints.
 * @num2 : Array of ints.
 * @s_num1 : Array of chars.
 * @s_num2 : Array of chars.
 * @len1 : Length of s_num1.
 * @len2 : Length of s_num2.
 * Return: Void.
 */
void multiplication(int *product, int *num1, int *num2, char *s_num1,
		char *s_num2, int len1, int len2)
{
	int i, j, tmp;

	for (i = 0; i < len1; i++)
		num1[i] = s_num1[len1 - i - 1] - 48;
	for (i = 0; i < len2; i++)
		num2[i] = s_num2[len2 - 1 - i] - 48;
	for (i = 0; i < len2; i++)
		for (j = 0; j < len1; j++)
			product[i + j] += num2[i] * num1[j];
	for (i = 0; i < len1 + len2; i++)
	{
		tmp = product[i] / 10;
		product[i] = product[i] % 10;
		product[i + 1] = product[i + 1] + tmp;
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
	int *num1, *num2, *product, len1, len2;

	if (argc != 3 ||
	(check_digits(argv[1]) != 1 || check_digits(argv[2]) != 1))
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		printf("0\n");
		return (0);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	num1 = malloc(sizeof(int) * len1);
	num2 = malloc(sizeof(int) * len2);
	product = malloc(sizeof(int) * (len1 + len2));
	if (product == NULL)
		return (0);
	add_zeros(product, (len1 + len2));
	multiplication(product, num1, num2, argv[1], argv[2], len1, len2);
	print_array(product, len1 + len2);
	printf("\n");
	free(product);
	free(num1);
	free(num2);
	return (0);
}
