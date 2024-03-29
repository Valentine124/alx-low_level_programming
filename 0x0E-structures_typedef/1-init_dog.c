#include "dog.h"
#include <string.h>

/**
 * init_dog - initialize dog
 *
 * @d: d of type dog
 *
 * @name: name of type char
 *
 * @age: age is a float
 *
 * @owner: owner is a char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name = name);
	d.age = age;
	strcpy(d->owner = owner);
}
