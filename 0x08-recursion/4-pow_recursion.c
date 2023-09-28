#include "main.h"

/**
 * _pow_recursion -Entry point
 *
 * @x: the input
 *
 * @y: The input
 *
 * Return: Always 0 (Success)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
