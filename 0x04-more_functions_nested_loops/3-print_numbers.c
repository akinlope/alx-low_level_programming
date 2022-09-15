#include "main.h"
#include <stdio.h>

/**
 * print_numbers - funtion to print number
 *0 to 9
 * Return: returns nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
}
