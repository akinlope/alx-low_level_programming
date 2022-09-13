#include <stdio.h>

char print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	return (0);
}
int main(void)
{
	char call = print_alphabet();

	putchar(call);
	printf("\n");
	return (0);
}
