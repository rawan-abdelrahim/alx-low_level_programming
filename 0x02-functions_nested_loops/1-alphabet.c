#include "main.h"

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
