#include <stdio.h>

int main(void){
	char z;
	z = 'z';
	while (z >= 'a'){
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
