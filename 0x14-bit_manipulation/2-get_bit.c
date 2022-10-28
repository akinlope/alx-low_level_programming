#include "main.h"

/**
 * get_bit - funuction to get bit
 * @n: the bit to work with
 * @index: where to start from
 * Return: return a value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
	}
}


