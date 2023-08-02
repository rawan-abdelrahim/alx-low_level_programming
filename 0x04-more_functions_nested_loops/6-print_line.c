#include "main.h"

/**
 * print_line -Entry point
 *
 * @n: input
 *
 * Return: Always 0 (Success)
*/
void print_line(int n)
{
	if (n > 0)
		while (n--)
			_putchar('_');
	_putchar('\n');
}
