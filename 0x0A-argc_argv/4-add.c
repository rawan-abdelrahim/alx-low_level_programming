#include "main.h"
#include <stdlib.h>

/**
 * main -Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0, sum = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
