#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a function dog Struct
 * @name: argument for dog name
 * @age: argument for dog age
 * @owner: argument for dog owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_copy(char *s);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

