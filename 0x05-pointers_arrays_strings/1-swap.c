#include <stdio.h>

/*
 * swap_int(int *a, int *b) - a function that swap values
 *
 * @*a: test1
 * @*b: test2
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
