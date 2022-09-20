#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - a function that prints a string, in reverse.
 *
 * *@s: parameter
 *
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int i, len, temp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	putchar("\n");
}
