#include <stdio.h>
int main(void){
	int one;
	int two;

	for (one = '0'; one <= '9'; one++){
		for (two = (one + 1); two <= '9'; two++){
			putchar(one);
			putchar(two);
			
			if(one != '8'){
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
