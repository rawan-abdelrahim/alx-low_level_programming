#include "main.h"

/**
 * times_table -Entry point
 *
 * Return: Always 0 (Success)
*/
void times_table(void)
{
	int i, j, ans;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1 ; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			ans = i * j;
			if (ans <= 9)
				_putchar(' ');
			else
				_putchar((ans / 10) + 48);
			_putchar((ans % 10) + 48);
		}
		_putchar(' ');
	}
}
