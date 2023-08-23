#include "main.h"

/**
  * print_format - checks for data type and return the function
  * @format: arg
  * @arg: arg
  * Return: length
  */

int print_format(const char *format, va_list arg)
{
	int i = 0;
	int num = 0;

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			int (*fp)(va_list arg) = get_format_printer_func(format[i + 1]);

			if (fp != NULL)
			{
				num += fp(arg);
			}
			else if (format[i + 1] == '%')
			{
				num += _putchar(format[i + 1]);
			}
			else
			{
				num += _putchar(format[i]); /** Print non-format characters directly */
				num += _putchar(format[i + 1]);
			}
			i++; /** Skip the format specifier character */
		}
		else
		{
			if (format[i] != '%')
			{
				num += _putchar(format[i]);
			}
		}
		i++;
	}

	return (num);
}
