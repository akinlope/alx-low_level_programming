#include "main.h"
#include <stdio.h>
/**
 * print_number - a funtion that prints an integer
 * @n: arguement
 * Return: always return nothing
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);

	putchar((num % 10) + '0');
}
