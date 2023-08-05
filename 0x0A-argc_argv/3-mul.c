# include "main.h"
#include <stdlib.h>

/**
 * main -Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
		printf("Error\n");
	else 
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
