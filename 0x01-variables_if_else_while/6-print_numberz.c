#include <stdio.h>

int main(void)
{
	int a;
	a = '0';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
