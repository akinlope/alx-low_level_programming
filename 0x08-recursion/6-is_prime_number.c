#include <stdio.h>
#include "main.h"

/**
 * myfunc - a sudo functio
 * @n: first arguement
 * @i: second arguement
 * Return: return a value
 *
 */

int myfunc(int n, int i)
{
	if (n % i == 0)
	{
		if (i == n)
		{
		return (1);
		}
	return (0);
	}
	return (0 + myfunc(n, i + 1));
}

/**
 * is_prime_number - check prime numbers function
 * @n: only arguement
 * Return: returns a alue
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	else if (n % 2 == 0)
	{
	return (0);
	}
	else
	{
	return (myfunc(n, 3));
	}
}
