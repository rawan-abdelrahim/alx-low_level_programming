#include "main.h"

/**
 * print_alphabet_x10 -Entry point
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int c, i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
