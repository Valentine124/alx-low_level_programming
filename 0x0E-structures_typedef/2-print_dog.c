#include <stdio.h>

/**
 * print_dog - print dog
 *
 * @d: dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
        printf("Breed: %s\n", d->breed ? d->breed : "(nil)");
}
