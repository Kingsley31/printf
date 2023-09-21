#include "main.h"

/**
  * print_o - format an integer as an octal number
  * @n: arguement passed
  * Return: number of character
  */

int print_o(unsigned long int n)
{
	int rem = n % 8;
	int len;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 8)
	{
		_putchar(n + '0');
		return (1);
	}

	len = print_o(n / 8);
	_putchar(rem + '0');
	return (len + 1);
}

/**
  * print_x - handles integer as a lowercase hexadecimal
  * @n: arguement passed
  * Return: number of character passed
  */

int print_x(unsigned long int n)
{
	int rem = n % 16;
	int len;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 16)
	{
		if (n < 10)
			_putchar(rem + '0');
		else
			_putchar(rem - 10 + 'a');

		return (1);
	}

	len = print_x(n / 16);
	if (rem < 10)
		_putchar(rem + '0');
	else
		_putchar(rem - 10 + 'a');

	return (len + 1);

}

/**
  * print_XC - handles integer as Uppercase hexadecimal
  * @n: arguement passed
  * Return: number of character
  */

int print_XC(unsigned long int n)
{
	int rem = n % 16;
	int len;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 16)
	{
		if (n < 10)
			_putchar(rem + '0');
		else
			_putchar(rem - 10 + 'A');

		return (1);
	}

	len = print_XC(n / 16);
	if (rem < 10)
		_putchar(rem + '0');
	else
		_putchar(rem - 10 + 'A');

	return (len + 1);
}
