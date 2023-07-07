#include <stdio.h>
/**
 * main - multiplies two numbers.
 * @argc : Number of arguments.
 * @argv : Pointer to array of arguments.
 * Return: Result of multiplication of 2 nums.
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	for (i = 0; argv[1][i] != '\0' && argv[2][i] != '\0'; i++)
		mul += (argv[1][i] - 48) * (argv[2][i] - 48);
	printf("%d\n", mul);
	return (0);
}
