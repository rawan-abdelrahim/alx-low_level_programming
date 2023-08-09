#include "main.h"

/**
 * _strcpy - a function copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: pointer
 * @src: pointer
 * Return: string.
 */
char *_strcpy(char *dest, char *src)
{
	int sz = 0;

	for (; ; sz++)
	{
		dest[sz] = src[sz];
		if (src[sz] == '\0')
			return (dest);
	}
}
