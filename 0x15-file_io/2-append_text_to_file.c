#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * _strlen - return the length of a string.
 * @s : pointer to a constant string.
 * Return: len; length of string str.
 */
int _strlen(const char *s)
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
 * append_text_to_file - appends text at the end of a file.
 * @filename : Name of file.
 * @text_content : string to be added.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int len_string;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
