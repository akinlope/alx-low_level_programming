#include "main.h"

/**
 * _print_rev_recursion - a function that prints the reverse of a string
 * @s: arguement
 * Return: returns value
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
	else
	{
		putchar('\n');
	}
}

