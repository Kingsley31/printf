#include "main.h"

/**
 * print_format_c - prints argument for c converter character
 * @arg: va_list arguement passed
 * Return: number of characters printed
 */
int print_format_c(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_format_s - prints argument for s converter character
 * @arg: va_list arguement passed
 * Return: number of characters printed
 */
int print_format_s(va_list arg)
{
	char *str = va_arg(arg, char *);

	return (print_s(str));
}

/**
 * print_format_d_i - prints argument for d and i converter character
 * @arg: va_list arguement passed
 * Return: number of characters printed
 */
int print_format_d_i(va_list arg)
{
	int n = va_arg(arg, long int);

	return (print_d_i(n));
}

/**
 * print_format_b - prints arguement for b converted character
 * @arg: va_list arguement passed
 * Return: number of characters printed
 */
int print_format_b(va_list arg)
{
	long int n = va_arg(arg, long int);

	return (print_b(n));
}

/** 
  * print_format_u - prints unsigned integer in decimal
  * @arg: va_list arguement passed
  * Return: number character printed
  */

int print_format_u(va_list arg)
{
	long int num = va_arg(arg, long int);

	return (print_u(num));
}
