#include "main.h"

/**
 * print_array - a function that prints
 * n elements of an array of integers
 * @a: the name of array
 * @n: the number of array elements
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
