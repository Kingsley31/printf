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

	va_start(arg, format);

	int num = print_format(format, arg);

	va_end(arg);
	return (num);
}
