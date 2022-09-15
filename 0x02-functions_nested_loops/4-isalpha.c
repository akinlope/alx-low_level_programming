#include "main.h"

/**
 * _isalpha - function to check for capital character
 *@C: is the character that will be used for the arguement of the function
 * Return: Always 0.
 */

int _isalpha(int C)
{
	if ((C >= 'a' && C <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
