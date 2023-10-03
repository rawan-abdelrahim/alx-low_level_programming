#include "main.h"
/**
 * cap_string - a function capitalizes all words of a string
 * @s: string
 * Return: string 
 */
char *cap_string(char *s)
{
	int i;

	for(i = 0; s[i]; i++)
	{

		if (i > 0 && !(s[i -1] >= 'a' && s[i - 1] <= 'z'))
			if (s[i - 1] == ' '  ||
			s[i - 1] == '\t' ||
			s[i - 1] == '\n' ||
			s[i - 1] == ',' ||
			s[i - 1] == ':' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}')
				s[i] -= 32;
	}
	return (s);
}
