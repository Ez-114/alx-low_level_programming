#ifndef DOG_H
#define DOG_H

/**
* struct dog - a dog struct data type
* @name: name of the dog
* @age: dog age
* @owner: owner of the dog
*
* Description: A  struct containing some info about dog names, age and owner.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *name, float age, char *owner);

#endif
