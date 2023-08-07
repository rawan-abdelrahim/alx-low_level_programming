#include "main.h"

/**
 * create_array -  function that creates an array of chars,
 * and initializes it with a specific char
 * @size: is a size of array
 * @c: is a char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
		return (0);
	while (size--)
		ptr[size] = c;

	return (ptr);
}
