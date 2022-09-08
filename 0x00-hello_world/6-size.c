#include <stdio.h>

int main(void)
{
	int  intType;
	char charType;
	long longType;
	float floatType;

	printf("the size of int is: %zu bytes\n", sizeof(intType));
	printf("the size of char is: %zu bytes\n", sizeof(charType));
	printf("the size of long is %zu bytes\n", sizeof(longType));
	printf("the size of float is: %zu bytes\n", sizeof(floatType));

	return (0);
}
