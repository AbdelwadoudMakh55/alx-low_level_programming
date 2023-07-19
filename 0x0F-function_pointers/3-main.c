#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point.
 * @argc : Number of arguments.
 * @argv : Pointer to array of arguments name.
 * Return: Int.
 */
int main(int argc, char *argv[])
{
	int (*calc_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && 
	argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	calc_func = get_op_func(argv[2]);
	printf("%d\n", calc_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
