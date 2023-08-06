#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: is a pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}
