#include "main.h"

/**
  * print_s - function to print string
  * @s: arguement
  * Return: number of digit
  */

int print_s(char *s)
{
	int i = 0;

	if (s == NULL)
		return (print_s("(null)"));

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_d_i - prints integer datatypes using _putchar fumction
 * @n: integer to be printed
 * Return: number of characters printed
 */
int print_d_i(long int n)
{
	int rem = n % 10;
	int len;

	if (n < 0)
	{
		_putchar('-');
		return (1 + print_d_i(n * -1));
	}
	if (n < 10)
	{
		_putchar(n + '0');
		return (1);
	}
	len = 1 + print_d_i(n / 10);
	_putchar(rem + '0');
	return (len);
}

/**
 * print_b - converts integer to binary and prints it
 * @num: the number to convert
 * Return: number of characters printed
 */
int print_b(unsigned int num)
{
	int binary[64];
	int index = 0;
	int count = 0;
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		binary[index++] = num % 2;
		num /= 2;
	}
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		count++;
	}
	return (count);
}

/**
  * print_u - prints a unsighned int
  * @num: the int
  * Return: num
  */

int print_u(unsigned long int num)
{
	int rem = num % 10;
	int len;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 10)
	{
		_putchar(num + '0');
		return (1);
	}

	len = print_u(num / 10);
	_putchar(rem + '0');
	return (len + 1);
}
