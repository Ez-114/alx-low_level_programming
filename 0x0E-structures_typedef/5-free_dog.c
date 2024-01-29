#include "dog.h"
#include <stdlib.h>

/**
* free_dog - free allocated space for struct type dog
* @d: pointer to struct dog
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
	else
		return;
}
