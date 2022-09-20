#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 *
 * *@s: parameter
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = (len - 1); i >= 0; i--)
	{
		if (s[i] != ' ')
		{
			putchar(s[i]);
		}
	}
	putchar(s[i]);
}
