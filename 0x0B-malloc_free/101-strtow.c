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
		if (str[i] == 32 && word_len != 0)
		{
			num_word += 1;
			word_len = 0;
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
	int *arr_len;
	int i;
	int num_let = 0;
	int index = 0;

	arr_len = (int *)malloc(num_words(str) * sizeof(int));
	if (arr_len == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 32 && str[i] <= 126)
			num_let += 1;
		if (str[i] == 32 && num_let != 0)
		{
			arr_len[index] = num_let;
			num_let = 0;
			index++;
		}
		else
			arr_len[index] = num_let;
	}
	return (arr_len);
}
/**
 * strtow -  splits a string into words.
 * @str : Pointer to string.
 * Return: Pointer to array of strings.
 */
char **strtow(char *str)
{
	char **arr_word;
	int i, j, index1 = 0, index2 = 0;
	int *len_words = len_word(str);

	if (str == NULL || _strlen(str) == 0)
		return (0);
	arr_word = (char **)malloc((num_words(str) + 1) * sizeof(char *));
	if (arr_word == NULL)
	{
		free(len_words);
		return (0);
	}
	for (i = 0; i < num_words(str); i++)
	{
		arr_word[i] = (char *)malloc((len_words[i] + 1) * sizeof(char));
		if (arr_word[i] == NULL)
		{
			for (j = 0; j < num_words(str); j++)
				free(arr_word[j]);
			free(arr_word);
			free(len_words);
			return (0);
		}
	}
	i = 0;
	arr_word[num_words(str)] = NULL;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		while (index2 < len_words[index1] && str[i] != ' ')
		{
			arr_word[index1][index2] = str[i];
			index2++;
			i++;
		}
		if (str[i] == ' ' && index2 != 0)
		{
			arr_word[index1][index2] = '\0';
			index1++;
			index2 = 0;
		}
		i++;
	}
	free(len_words);
	return (arr_word);
}
