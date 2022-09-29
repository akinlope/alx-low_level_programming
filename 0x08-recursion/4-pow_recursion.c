#include "main.h"

/**
 * _pow_recursion - funtion to solve power
 * @x: first arguement
 * @y: second arguement
 * Return: returns a value
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
