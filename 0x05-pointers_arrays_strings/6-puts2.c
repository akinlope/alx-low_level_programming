#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other characters
 *
 * *@str: parameter
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		if (str[i] % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
