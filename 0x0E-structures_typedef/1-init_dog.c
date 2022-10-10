#include "dog.h"

/**
 * init_dog - initializes a struct of type struct
 * @d: the declared dog struct
 * @name: name if the dog
 * @age: age of the dog
 * @owner: the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
