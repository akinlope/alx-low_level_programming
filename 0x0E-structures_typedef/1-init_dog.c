#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function struct
 * @d: struct array
 * @name: name
 * @age: age
 * @owner: owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
