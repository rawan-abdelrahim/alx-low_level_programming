#include "main.h"

/**
 * print_rev - function prints a string, in reverse
 * @s: is a string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int sz = 0;

	while (s[sz] != '\0')
		sz++;
	while (sz--)
		_putchar(s[sz]);
	_putchar('\n');
}
