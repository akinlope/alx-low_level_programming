#include "main.h"
#include <stdio.h>

/**
 * print_line - function to print line
 * @n: parameter
 * Return: always return 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
