#include <stdio.h>
/**
 * print_before_main - Print a sentence before the main function is executed.
 * Return: Void.
 */
__attribute__((constructor)) void print_before_main(void)
{
	printf("%s", "You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
