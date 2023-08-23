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
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(arg, int));
					num++;
					break;
				case 's':
				{
					char *str = va_arg(arg, char *);

					num += print_s(str);
					break;
				}
				case '%':
					_putchar(format[i + 1]);
					num++;
					break;
				default:
					_putchar(format[i]); /** Print non-format characters directly */
					_putchar(format[i + 1]);
					num += 2;
			}
			i++; /** Skip the format specifier character */
		}
		else
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				num++;
			}
		}
		i++;
	}

	return (num);
}
