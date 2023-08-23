#include "main.h"
#include <stdarg.h>


/**
  * _printf - replicate standard printf function
  * @format: arguement
  * Return: length
  */

int _printf(const char *format, ...)
{
	va_list arg;
	int num = 0;

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	num = print_format(format, arg);

	va_end(arg);
	return (num);
}
