#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create new dog
 *
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t) + 1);

	if (ndog == NULL)
		return (NULL);

	strcpy(ndog->name, name);
	ndog->age = age;
	strcpy(ndog->owner, owner);

	return (ndog);
}
