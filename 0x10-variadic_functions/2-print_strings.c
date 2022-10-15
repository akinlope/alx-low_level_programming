#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to print strings
 * @separator: first arg
 * @n: second arg
 * Return: returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *string;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *);

		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n + 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
