#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add integer numbers
 * @argc: first argument
 * @argv: second argument
 * Return: always return 0
 *
 */

int main(int argc, char *argv[])
{
	int sum, j, i;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

