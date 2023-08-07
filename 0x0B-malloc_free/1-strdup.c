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
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while(str[size] != '\0')
		size++;

	ptr = malloc(sizeof(*str) * size + 1);
	if (ptr == NULL)
		return (NULL);

	for (; i < size ; i++)
		ptr[i] = str[i];
	return (ptr);
}
