#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char digit = 'a';

	while (digit <= 'j')
	{
		putchar(digit - '1');
		digit++;
	}
	putchar('\n');
	return (0);
}
