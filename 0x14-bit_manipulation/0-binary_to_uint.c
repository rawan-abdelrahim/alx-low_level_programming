#include"man.h"

/**
 * binary_to_uint - a function converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;

		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
