#include <stdio.h>
#include <stdlib.h>
#include "../../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%b", 1024);
	len2 = printf("10000000000");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("%d\n", len);
        	printf("%d\n", len2);
		fflush(stdout);
		return (1);
	}
	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
