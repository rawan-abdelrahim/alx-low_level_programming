#include"main.h"

/**
 * print_binary -  a function prints the binary representation of a number.
 * @n: input number.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
