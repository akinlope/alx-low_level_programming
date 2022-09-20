#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * *@a: test1
 * *@b: test2
 *
 * Return: always return 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
