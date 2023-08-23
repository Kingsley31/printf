#include "main.h"
#include <stdlib.h>


/**
  * _putchar - a function for displaying a character in standard output.
  * @c: arguement
  * Return: write
  */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
