#include "dog.h"
#include <stdlib.h>

/**
* _strlen - gets length of a string
* @str: passed string
* Return: length of str
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
* new_dog - create new dog structure
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Return: a pointer to the new dog struct (Success), NULL (Fail)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
