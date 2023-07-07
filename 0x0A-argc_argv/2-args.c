#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc : Number of arguments.
 * @argv : Array of arguments names.
 * Return: all arguments it receives.
 */
int main(int argc, char *argv[])
{
	while (argc != 0)
	{
		printf("%s\n", *argv);
		argv++;
		argc--;
	}
	return (0);
}
