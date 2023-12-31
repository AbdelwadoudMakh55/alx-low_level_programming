#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename : Pointer to the name of the file.
 * @letters : Number of letters to be printed.
 * Return: Number of letter it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t len = 0;
	int pfile;
	char array[2000];

	if (filename == NULL || !letters)
		return (0);
	pfile = open(filename, O_RDONLY);
	if (pfile == -1)
		return (0);
	len = read(pfile, array, letters);
	len = write(STDOUT_FILENO, array, len);
	close(pfile);
	return (len);
}
