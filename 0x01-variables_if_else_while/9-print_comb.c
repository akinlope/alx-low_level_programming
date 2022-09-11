#include <stdio.h>
int main(void) {
	int n;
	n = '0';
	while (n <='9'){
		putchar(n);
		if(n != '9'){
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
