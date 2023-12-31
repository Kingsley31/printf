#include "main.h"

/**
 * get_format_printer_func - returns format printer function based
 * on character passed in.
 * @c: character converter passed in
 * Return: pointer to a format printer function
 */
int (*get_format_printer_func(char c))(va_list arg)
{
	format_printer fp[] = {
		{'c', print_format_c},
		{'s', print_format_s},
		{'d', print_format_d_i},
		{'i', print_format_d_i},
		{'b', print_format_b},
		{'u', print_format_u},
		{'o', print_format_o},
		{'x', print_format_x},
		{'X', print_format_XC},
	};

	int i = 0;

	while (i < 9)
	{
		if (fp[i].c == c)
			return (fp[i].fun);
		i++;
	}
	return (NULL);
}
