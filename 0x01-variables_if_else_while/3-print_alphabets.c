#include <stdio.h>
/* a simple program that print a-z & A-Z */
int main(void)
{
	char az, AZ;
	az= 'a'; AZ= 'A';
	while (az <= 'z')
	{
		putchar (az);
		az++;
	}
	while (AZ <= 'Z')
	{
		putchar (AZ);
		AZ++;
	}
	return (0);
}
