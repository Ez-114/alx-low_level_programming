#include <stdlib.h>

/**
* print_name - prints a name.
* @name: name of a person.
* @f: function pointer.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
