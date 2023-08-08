#include "main.h"

/**
 * rev_string - a function reverses a string
 * @s: is a string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int sz = 0, i = 0;
	char tmp;
	while (s[sz] != '\0')
		sz++;
	for ( i = sz - 1; i >= sz / 2; i--)
	{
		tmp = s[i];
		s[i] = s[sz - i - 1];
		s[ sz - i - 1] = tmp;
	}
}
