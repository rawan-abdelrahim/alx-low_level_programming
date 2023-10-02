#include "main.h"
/**
 * reverse_array - a function reverses the content of an array of integers
 * @a: array
 * @n: size
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	if (n == 0)
		return;

	for (i = 0; i <= n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
