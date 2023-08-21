#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list arg;

    va_start(arg, format);

    int len = format(format, arg);

    va_end(arg);

    return (len);

}

