#include <limits.h>
#include <stdio.h>
#include "../../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;

	len = _printf("css%ccs%scscscs", 'T', "Test");
	printf("\n");
	len2 = printf("css%ccs%scscscs", 'T', "Test");
	printf("\n");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");

    return (0);

}
