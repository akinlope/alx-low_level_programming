#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase
 * @c: is the arguement passed into the function
 * Return: 0
*/

int _isupper(int c)
{

	c = 'A';
	if ((c >= 'A') && (c <= 'Z'))
	{
		_putchar('\n');
		return (1);
	}
	else{
		_putchar('\n');
		return (0);
}

