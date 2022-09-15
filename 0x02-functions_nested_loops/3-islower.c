#include "main.h"

/**
 * _islower - function to check for lower character
 *@c: is the character that will be used for the arguement of the function
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
