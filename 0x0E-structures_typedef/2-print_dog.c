#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints dog struct information
* @d: pointer to dog struct
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name == NULL)
		printf("Name: %s\n", "(nil)");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: %s\n", "(nil)");
	else
		printf("Owner: %s\n", d->owner);
}
