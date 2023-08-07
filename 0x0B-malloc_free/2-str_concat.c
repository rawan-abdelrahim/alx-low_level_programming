#include "main.h"

/**
 * str_concat - the function return the contents of s1,
 * followed by the contents of s2
 * @s1: is a first string
 * @s2: is a secound string
 * Return: NLL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int sz1 = 0, sz2 = 0, sz = 0, i = 0;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1 != NULL && s1[sz1] != '\0')
		sz1++;
	while (s2 != NULL && s2[sz2] != '\0')
		sz2++;
	sz = sz1 + sz2 - 2;
	ptr = malloc(sizeof(s1) * sizeof(s2) * sz + 1);
	if (ptr == NULL)
		return (NULL);
	for (; i < sz1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < sz2; i++)
		ptr[i + sz1] = s2[i];
	return (ptr);
}
