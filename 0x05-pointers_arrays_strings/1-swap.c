#include "main.h"

/**
 * swap_int - a function swaps the values of two integers
 * @a: is a pointer
 * @b: is a pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
