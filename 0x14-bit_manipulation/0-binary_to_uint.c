#include "main.h"
/**
 * binary_to_uint - convert to binary
 * @b: first argument
 * Return: return binary
 */

unsigned int binary_to_uint(const char *b)
{
	int bin_num = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		bin_num = 2 * bin_num + (b[i] - '0');
	}
	return (bin_num);

}

