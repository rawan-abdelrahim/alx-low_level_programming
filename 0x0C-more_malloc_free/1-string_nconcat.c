#include "main.h"

/**
 * word_len - Locates the index marking the end of the
 * first word contained within a string.
 * @str: the string to be searched.
 *
 * Return: the index marking the end of the initial word pointed to by
 * str.
 */
int word_len(char *str)
{
	int indx = 0, len = 0;

	while (str && str[indx] != '\0')
	{
		len++;
		indx++;
	}

	return (len);
}

/**
 * *string_nconcat - concatenates n bytes from second string to first one
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 *
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sz1, sz2, i, j = 0;
	char *ptr;

	sz1 = word_len(s1);
	sz2 = word_len(s2);

	if (n < sz2)
		sz2 = n;

	ptr = malloc(sizeof(char) * (sz1 + sz2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sz1; i++)
		ptr[i] = s1[i];

	for (i = sz1; i < sz1 + sz2; i++, j++)
		ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
