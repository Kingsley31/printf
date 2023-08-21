#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_s - for printing strings
 * @s: arguement
 * Return: number of character
*/

int print_s(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }

    return (i);

}


/**
 * print_d - function for printing number
 * @n: arguement
 * Return: number of character
*/

int print_d(int n)
{
    if (n < 0)
    {
        _putchar('-');
        return print_d(abs(n));
    }

    if (n < 10)
    {
        _putchar('0' + n);
        return 1;
    }

    int mod = n % 10;
    int rem = n - mod;

    int len = print_d(rem / 10);

    _putchar('0' + mod); // Print the last digit
    len++;               // Increment the length to include the last digit
    return len;
}

