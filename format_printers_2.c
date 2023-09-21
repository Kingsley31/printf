#include "main.h"


/**
  * print_format_o - prints format an integer as an octal number
  * @arg: va_list arguement passed
  * Return: number of character printed
  */

int print_format_o(va_list arg)
{
	int n = va_arg(arg, long int);

	return (print_o(n));
}

/**
  * print_format_x - handles format an integer as a lowercase hexadecimal
  * @arg: arguement passed
  * Return: number of character
  */

int print_format_x(va_list arg)
{
	int n = va_arg(arg, long int);

	return (print_x(n));
}

/**
  * print_format_XC - handles format integer in a uppercase hexadecimal
  * @arg: arguement passed
  * Return:  number of character
  */

int print_format_XC(va_list arg)
{
	int n = va_arg(arg, long int);

	return (print_XC(n));
}
