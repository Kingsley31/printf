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
