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
int print_d_i(int n)
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
