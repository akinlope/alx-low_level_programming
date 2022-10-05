#include <stdio.h>

/**
 * main - function that counts argument passed in
 * @argc: first argument
 * @argv: second argument
 * Return: always return 0
 *
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

