#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc : Number of arguments.
 * @argv : Array of name of arguments.
 * Return: number of arguments passed into it.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
