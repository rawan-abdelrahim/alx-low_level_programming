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
	int sum, num;

	if (argc != 2 || (argc == 2 && atoi(argv[1]) < 0))
	{
		printf("Error\n");
		return (1);
	}
	sum = 0;
	num = atoi(argv[1]);
	if (num >= 25)
	{
		sum += (num / 25);
		num %= 25;
	}
	if (num >= 10)
	{
		sum += (num / 10);
		num %= 10;
	}
	if (num >= 5)
	{
		sum += (num / 5);
		num %= 5;
	}
	if (num >= 2)
	{
		sum += (num / 2);
		num %= 2;
	}
	sum += num;
	printf("%d\n", sum);
	return (0);
}
