#include <stdio.h>

char print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			putchar(a);
			a++;
		}

		printf("\n");
		i++;
	}
	return (0);
}

int main(void)
{
	char call = print_alphabet_x10();
	putchar(call);
	return (0);
}

