#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;
	char c = 'a';

	while (digit <= 9)
	{
		putchar(digit);
		digit++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
