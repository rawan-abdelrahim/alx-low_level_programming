#include "main.h"

/**
 * print_last_digit -Entry point
 *
 * @n: is parameter
 *
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	if (n < 0)
		n = (-1) * n;
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
