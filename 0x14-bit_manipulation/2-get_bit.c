#include"main.h"
/**
 * get_bit - the function returns the value of a bit at a given index.
 * @n: input number.
 * @index: the input index.
 * Return: value or (-1).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << index;

	return (n & divisor ? 1 : 0);
}
