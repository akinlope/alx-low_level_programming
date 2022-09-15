#include "main.h"

/**
 * _isalpha - function to check for capital character
 *@c: is the character that will be used for the arguement of the function
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
