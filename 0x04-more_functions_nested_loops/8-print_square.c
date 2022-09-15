#include "main.h"
#include <stdio.h>

/**
 * print_square - prints squares
 * @s: parameter
 * Return: return nothing
 */

void print_square(int s)
{
	int i1, i2;

	if (s > 0)
	{
		for (i1 = 0; i1 < s; i1++)
		{
			for (i2 = 0; i2 < (s - 1); i2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
