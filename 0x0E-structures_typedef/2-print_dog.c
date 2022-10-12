#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a simple function
 * struct - a dog struct
 * @d: dog arg
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->age == NULL)
	{
		printf("Age: (nill)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
}

