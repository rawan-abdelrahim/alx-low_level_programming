#include"main.h"
/**
 * get_bit - the function returns the value of a bit at a given index.
 * @n: input number.
 *
 * Return: value or (-1).
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	n = (index != 0 ? n >> index : index);
	return (n & 1);
}
