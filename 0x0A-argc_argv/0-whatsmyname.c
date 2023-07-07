#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc : count of the arguments supplied to the program.
 * @argv : Pointer to array of array of pointers to the strings.
 * Return: Name of program.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
