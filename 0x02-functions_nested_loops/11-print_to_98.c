#include "main.h"

/**
 * print_to_98 -Entry point
 *
 * @n: input
 *
 * Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	printf("%d", n);
	while (n != 98)
	{
		if (n > 98)
			n--;
		else
			n++;
		printf(", %d", n);
	}
	printf("\n");
}
