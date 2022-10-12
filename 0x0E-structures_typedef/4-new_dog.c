#include <stdlib.h>
#include "dog.h"

/**
 * _copy - make a copy of passed in argument
 * @s: data to make copy of
 * Return: Pointer
 */

char *_copy(char *s)
{
	char *ptr;
	int i, len;

	if (s == NULL)
	{
		return (NULL);
	}

	for (len = 0; s[len] != '\0'; len++)

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		ptr[i] = s[i];
	}

	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - create a new dog
 *
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: pointer to a new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(bingo);
		return (NULL);
	}
	(bingo).name = new_name;

	(*bingo).age = age;

	if (new_owner == NULL)
	{
		free((*bingo).name);
		free(bingo);
		return (NULL);
	}
	(*bingo).owner = new_owner;
	return (bingo);
}
