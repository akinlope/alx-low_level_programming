#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * *@str: parameter
 *
 * Return: returns nothing
 *
 */

void puts_half(char *str)
{
	int i, mid, len, n;

	len = strlen(str);
	mid = len / 2;

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = mid; i < n; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = mid; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
