#include <stdio.h>
/**
 * main - multiplies two numbers.
 * @argc : Number of arguments.
 * @argv : Pointer to array of arguments.
 * Return: Result of multiplication of 2 nums.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
