# include "main.h"

/**
 * _strspn -Entry point
 *
 * @s: is pointer
 *
 * @accept: is pointer
 *
 * Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}
