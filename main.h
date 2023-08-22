#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);

int print_s(char *s);

int print_i(void *p);

int print_d(int n);

int _printf(const char *str, ...);

int print_format(const char *format, va_list arg);

#endif
