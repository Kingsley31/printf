#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);

int print_s(char *s);

int print_d_i(long int n);

int print_b(unsigned int num);

int print_u(unsigned int num);

int print_o(unsigned int n);

int print_x(unsigned int n);

int print_XC(unsigned int n);

/**
  * struct FormatPrinter - code
  * @c: format type
  * @fun: pointer function
  */
typedef struct FormatPrinter
{
	char c;
	int (*fun)(va_list arg);
} format_printer;

int print_format_c(va_list arg);

int print_format_s(va_list arg);

int print_format_d_i(va_list arg);

int print_format_b(va_list arg);

int print_format_u(va_list arg);

int print_format_o(va_list arg);

int print_format_x(va_list arg);

int print_format_XC(va_list arg);

int (*get_format_printer_func(char c))(va_list arg);

int _printf(const char *str, ...);

int print_format(const char *format, va_list arg);

#endif
