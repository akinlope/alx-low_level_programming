#include "main.h"
/*
 * A simple program that prints (_putchar)
 * using _putchar
 */

int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < strlen(word); i++)
	{
		_putchar("%c", word[i]);
	}
	_putchar("\n");
	return (0);
}
