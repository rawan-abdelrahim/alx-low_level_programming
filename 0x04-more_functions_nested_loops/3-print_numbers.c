#include "main.h"

/**
 * print_alphabet -Entry point
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
