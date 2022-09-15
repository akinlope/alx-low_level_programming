#include "main.h"

/**
 * _isdigit - check for digit within the function
 * @c: arguement passed into the funtion
 * Return: 1 it digit is available, otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
