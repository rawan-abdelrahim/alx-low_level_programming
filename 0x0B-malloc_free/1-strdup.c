#include "main.h"

/**
 * _strdup -  a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: is a string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ptr;
	int sz = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[sz] != '\0')
		sz++;

	ptr = malloc(sizeof(*str) * sz + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sz ; i++)
		ptr[i] = str[i];

		return (ptr);
}
