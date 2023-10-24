#include "variadic_functions.h"


/**
 * get_format_func - Selects the correct function to print
 *               the format asked by the user.
 * @fmt: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the format given as a parameter.
 */
int (*get_format_func(char *fmt))(void)
{
	fmt_t ops[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0;
	
}
