#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: is the arguement passed into the function
 * Return: 1 whether it is, 0 otherwise
*/

int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
		return (0);
}

