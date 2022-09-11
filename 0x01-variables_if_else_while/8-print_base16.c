#include <stdio.h>
int main(void){
	int n;
	char alpha;

	n = '0';
	alpha = 'a';

	while (n <= '9'){
		putchar(n);
		n++;
	}
	while (alpha <= 'f'){
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}

