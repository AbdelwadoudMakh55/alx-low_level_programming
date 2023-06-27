#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Generate random number of characters with ASCII codes that adds up to 2772.
 *
 * Return: void.
 */
int main(void)
{
	int random_num;
	int desired_ascii_sum;

	srand(time(NULL));
	while (desired_ascii_sum <= 2645)
	{
		random_num = rand() % 128;
		desired_ascii_sum += random_num;
		printf("%c", random_num);
	}
	printf("%c", 2772 - desired_ascii_sum);
	return (0);
}
