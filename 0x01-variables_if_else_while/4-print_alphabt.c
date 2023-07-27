#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			continue;
		else
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
