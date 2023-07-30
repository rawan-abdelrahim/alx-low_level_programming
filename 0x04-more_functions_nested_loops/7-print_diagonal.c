#include "main.h"

/**
 * print_diagonal -Entry point
 *
 * @n: is input
 *
 * Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');
			_putchar('\n');
		}
	_putchar('\n');
}
