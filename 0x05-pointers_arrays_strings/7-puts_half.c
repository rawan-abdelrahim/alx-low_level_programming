#include "main.h"

/**
 * puts_half - a function print the second half of the string
 * @str: is a string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int sz = 0, n;

	while (str[sz] != '\0')
		sz++;
	if (sz % 2 == 0)
		n = sz / 2;
	else
		n = ((sz - 1) / 2) + 1;
	for (; n < sz; n++)
		_putchar(str[n]);
	_putchar('\n');
}
