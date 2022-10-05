#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that counts argument passed in
 * @argc: first argument
 * @argv: second argument
 * Return: always return 0
 *
 */

int main(int argc, char *argv[])
{
	int i,x;

	for (i = 0; i < argc; i++)
	{
	x = atoi(argv[i]);
	printf("%d\n", x);
	}

	return (0);
}

