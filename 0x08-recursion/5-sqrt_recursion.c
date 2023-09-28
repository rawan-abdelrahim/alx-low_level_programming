#include "main.h"

/**
 * support_function -Entry point
 *
 * @num: is input number
 *
 * @root: is input number
 *
 * Return: Always 0 (Success)
*/
int support_function(int num, int root)
{
	if (root * root == num)
		return (root);
	else if (root * root > num)
		return (-1);
	else
		return (support_function(num, root + 1));
}

/**
 * _sqrt_recursion -Entry point
 *
 * @n: is input number
 *
 * Return: Always 0 (Success)
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (support_function(n, 0));
}
