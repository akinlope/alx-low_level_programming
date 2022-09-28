#include "main.h"
#include "_putchar"

/**
 * _puts_recursion - a function that prints a string
 * *@s: arguement
 * Return: return value
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
	}
	else
	{
		putchar("\n");
	}
}
