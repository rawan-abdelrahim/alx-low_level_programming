#include "main.h"

/**
 * puts2 - a function prints every other character of a strin
 * @str: is a string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int sz = 0, i = 0;

	while (str[sz] != '\0')
		sz++;
	for (; i < sz; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');

}
