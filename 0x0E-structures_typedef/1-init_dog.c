#include "dog.h"

/**
* init_dog - init the dog data structure.
* @d: struct pointer
* @name: struct member name
* @age: member age
* @owner: member owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
