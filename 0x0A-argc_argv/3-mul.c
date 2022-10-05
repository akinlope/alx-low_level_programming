#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two integers
 *
 * @argc: argument counted
 * @argv: argument vector
 *
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int sum, a, b;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = a * b;
		printf("%d\n", sum);
	}

	return (0);
}
