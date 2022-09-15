#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print 0-9 excluding 4 & 2
 *
 * Return: always nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
		{
			continue;
		}
		putchar(i);
	}
	putchar(10);
}
