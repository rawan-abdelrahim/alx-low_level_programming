#include <stdlib.h>
#include "main.h"
/**
 * word_len - Locates the index marking the end of the
 * 	      first word contained within a string.
 * @str: the string to be searched.
 *
 * Return: the index marking the end of the initial word pointed to by
 * 	   str.
 */
int word_len(char *str)
{
	int indx = 0, len = 0;
	
	while(*(str + len) && *(str + len) != ' ')
	{
		len++;
		indx++;
	}

	return (len);
}
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int cnt = 0, i;
	bool flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] = ' ')
			flag = 0;
		else if (!flag)
		{
			flag = 1;
			cnt++;
		}
	}
	return (cnt);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **arr;
	int i, j, words , letters, indx = 0;

	if (str == NULL || str == "")
		return (NULL);

	words = count_word(str);

	if (words == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (words + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < words ; i++)
	{
		while (str[indx] == ' ')
			indx++;

		letters = word_len(str + indx);

		arr[i] = malloc(sizeof(char *) * (letters + 1));

		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);

			free(arr);

			return (NULL);
		}

		for (j = 0; j < letters; j++)
			arr[i][j] = str[index++];

		arr[i][j] = '\0';
	}
	arr[i] = NULL;

	return (arr);
}
