#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - struct
 * @d: input pointer to struct dog
 * @name: char *
 * @age: float
 * @owner:  char *
 * Description: dog structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
