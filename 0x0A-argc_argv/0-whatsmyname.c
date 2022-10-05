#include <stdio.h>

/**
 * main - print the program name
 * @argc: first arguement which represent the number
 * of arguements passed to the function
 *
 * @argv: second arguement which check the vector
 * pointers to a string
 *
 * Return: always return 0
 **/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
