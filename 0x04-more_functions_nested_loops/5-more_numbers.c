#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return: return nothing
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int n;

		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				putchar((n / 10) + '0');
			}
			putchar((n % 10) + '0');
		}
		putchar(10);
	}
}
