#include "main.h"

/**
 * _puts_recursion -Entry point
 *
 * @s: is a string
 *
 * Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
	if ( *s == '\0')
		_putchar('\n');
	else
	_putchar(*s);
	_puts_recursion(s + 1);
}
