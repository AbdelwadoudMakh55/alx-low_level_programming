#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * main - Entry point: Copy a file to another one.
 * @argc : Number of arguments.
 * @argv : Pointer to array of args.
 * Return: 0 success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_source, close_destination;
	char buffer[3000];
	ssize_t len;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR
	| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	len = read(file_from, buffer, 1024);
	while (len != 0)
	{
		len = write(file_to, buffer, len);
		len = read(file_from, buffer, 1024);
	}
	close_source = close(file_from);
	close_destination = close(file_to);
	if (close_source == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close_destination == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);
	}
	return (0);
}
