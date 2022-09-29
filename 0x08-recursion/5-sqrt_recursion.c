#include "main.h"

/**
 * _find_sqrt - functio to check square
 * @n: first arguement
 * @root: second arguement
 * Return: return a value
 *
 */

int _find_sqrt(int n, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	else if (root == n / 2)
	{
		return (-1);
	}
	else
	{
		return (_find_sqrt(n, root + 1));
	}
}

/**
 * _sqrt_recursion - functio of square numbers
 * @n: arguement
 * Return: return a value
 *
 **/

int _sqrt_recursion(int n)
{
	int root;

	root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (find_sqrt(n, root - 1));
	}
}
