#include "main.h"

/**
 * support_function -Entry point
 *
 * @num1: is input number
 *
 * @num2: is input number
 *
 * Return: int
*/
int support_function(int num1, int num2)
{
	if (num2 >= num1 && num1 > 1)
		return (1);
	else if (num1 % num2 == 0 || num1 <= 1)
		return (0);
	else
		return (support_function(num1, num2 + 1));
}

/**
 * is_prime_number -Entry point
 *
 * @n: is input number
 *
 * Return: int
*/

int is_prime_number(int n)
{
	return (support_function(n, 2));
}
