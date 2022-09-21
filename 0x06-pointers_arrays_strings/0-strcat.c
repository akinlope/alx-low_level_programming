#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * *@dest: first parameter
 * *@src: second parameter
 *
 * Return: always return *@dest 1
 *
 */

char *_strcat(char *dest, char *src)
{
	dest[100];
	char *s = " ";

	src[100];

	strcat(dest, s);
	strcat(dest, src);

	return (dest);
}
