#include "main.h"

/**
 * _abs -Entry point
 *
 * @n: is parameter
 *
 * Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
