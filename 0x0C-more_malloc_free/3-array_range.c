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
	int *ptr;
	int i, sz;

	if (min > max)
		return (NULL);

	sz = max - min + 1;

	ptr = malloc(sizeof(*ptr) * sz);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sz; i++)
		ptr[i] = min++;

	return (ptr);
}

