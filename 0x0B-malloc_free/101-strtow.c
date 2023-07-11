#include "main.h"
#include <stdlib.h>
/**
 * _strlen - return the length of a string.
 * @s : pointer to a string.
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
 * num_words - Number of words in a string.
 * @str : Pointer to string.
 * Return: Num of words.
 */
int num_words(char *str)
{
	int i;
	int num_word = 0;
	int word_len = 0;
	int space_count = 0;

	for (i = 0; str[i] != '\0' && i + 1 <= _strlen(str); i++)
	{
		if (str[i] > 32 && str[i] <= 126)
			word_len += 1;
		if (str[i] == 32 && world_len != 0)
		{
			num_word += 1;
			wordl_len = 0;
		}
		if (str[i] == 32)
			space_count += 1;
	}
	if (str[_strlen(str) - 1] > 32 && str[_strlen(str) - 1] <= 126)
		num_word += 1;
	if (space_count == 0)
		return (1);
	return (num_word);
}
/**
 * len_word - Gives the length of words within a string.
 * @str : Pointer to string.
 * Return: Pointer to array of lengths in order.
 */
int *len_word(char *str)
{
	int *array_len;
	int i;
	int num_let = 0;
	int index = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 32 && str[i] <= 126)
			num_let += 1;
		if (str[i] == 32 && num_let != 0)
		{
			array_len[index] = num_let;
			num_let = 0;
			index++;
		}
		array_len[index] = num_let;
	}
	return (array_len);
}
/**
 * strtow -  splits a string into words.
 * @str : Pointer to string.
 * Return: Pointer to array of strings.
 */
char **strtow(char *str)
{
	char **arr_word;
	int index1 = 0;
	int index2 = 0;
	int *len_words = len_word(str);
	int i, j;

	if (str == NULL || str == "")
		return (0);
	array_words = (char **)malloc(num_words(str) + 1);
	if (array_words == NULL)
		return (0);
	for (i = 0; i < num_words(str); i++)
	{
		array_words[i] = (char *)malloc(len_words[i] + 1);
		if (array_words[i] == NULL)
		{
			for (j = 0; j < num_words(str); j++)
				free(array_words[j]);
			free(array_words);
			return (0);
		}
	}
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != ' ')
		{
			array_words[index1][index2] = str[i];
			index2++;
		}
		if (str[i] == ' ' && index2 != 0)
		{
			array_words[index1][index2] = '\0';
			index1++;
			index2 = 0
		}
		i++
	}
	array_words[index1][index2] = '\0';
	array_words[num_words(str)] = NULL;
	return (array_words);
}
