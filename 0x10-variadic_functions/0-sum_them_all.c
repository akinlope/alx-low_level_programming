#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function to add all arg
 * @n: passed in arg
 * Return: return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, count;
	va_list argptr;

	count = 0;
	sum = 0;

	if (n == 0)
		return (0);

	va_start(argptr, n);

	while (count < n)
	{
		sum = sum + va_arg(argptr, int);
		count++;
	}
	va_end(argptr);
	return (sum);
}
