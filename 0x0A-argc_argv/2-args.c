#include <stdio.h>

/**
 * main - funtion to printout all arguments
 * @argc: first arg
 * @argv: second arfg
 * Return: always REturn 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
