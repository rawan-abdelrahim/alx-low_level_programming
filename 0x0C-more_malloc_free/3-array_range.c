#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value stored
 * @max: maximum value stored
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i, sz;
	int *arr;

	if (min > max)
		return (NULL);

	sz = max - min + 1;

	arr = malloc(sizeof(int) * sz);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < sz; i++)
		arr[i] = min++;

	return (arr);
}
