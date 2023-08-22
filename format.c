#include "main.h"

/**
  * format - checks for data type and return the function
  * @format: arg
  * @arg: arg
  * Return: length
  */

int format(const char *format, va_list arg)
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
					num += _putchar(va_arg(arg, int));
					break;
				case 's':
				{
					char *str = va_arg(arg, char *);

					if (str != NULL)
					{
						num += print_s(str);
					}
					break;
				}
				default:
					num += _putchar(format[i]); /** Print non-format characters directly */
			}
			i++; /** Skip the format specifier character */
		}
		else
		{
			_putchar(format[i]);
			num++;
		}
		i++;
	}

	return (num);
}
