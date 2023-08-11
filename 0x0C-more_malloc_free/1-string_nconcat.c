#include "main.h"

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
	char *res_string;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len++;
	}

	if (n < len2)
		res_string = malloc(sizeof(char) * (len1 + n + 1));
	else
		res_string = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!res_string)
		return (NULL);

	while (i < len1)
	{
		res_string[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		res_string[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		res_string[i++] = s2[j++];

	res_string[i] = '\0';

	return (res_string);
}
