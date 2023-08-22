#include "main.h"

int _printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);

    int i = 0;
    int num = 0;

    while (format[i])
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            switch (format[i + 1])
            {
            case 'c':
                _putchar(va_arg(ap, int));
                break;
            case 's':
            {
                char *str = va_arg(ap, char *);
                if (str != NULL)
                {
                    num += print_s(str);
                }
                else
                {
                    printf("(nil)");
                }
                break;
            }
            default:
                _putchar(format[i]); // Print non-format characters directly
            }
            i++; // Skip the format specifier character
        }
        else
        {
            _putchar(format[i]);
        }

        i++;
    }

    va_end(ap);
    printf("\n");
    return (num);
}

