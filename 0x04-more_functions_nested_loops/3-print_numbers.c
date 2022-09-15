#include "main.h"
#include <stdio.h>

/**
 * print_numbers - funtion to print number
 *
 * Return: always return 0
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (10);
}
