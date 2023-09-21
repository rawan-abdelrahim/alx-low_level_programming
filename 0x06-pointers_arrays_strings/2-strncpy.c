#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i , sz = 0;

	while(src[sz] != '\0')
		sz++;

	for(i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
