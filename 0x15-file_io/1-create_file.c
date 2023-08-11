#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
/**
 * _strlen - return the length of a string.
 * @s : pointer to a constant string.
 * Return: len; length of string str.
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
/**
 * create_file - creates a file.
 * @filename : Name of file.
 * @text_content : Pointer to content of file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, len_string;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		len_string = _strlen(text_content);
		write(file, text_content, len_string);
	}
	close(file);
	return (1);
}
