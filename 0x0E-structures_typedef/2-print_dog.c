#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - pfints a struct dog
 * @d: pointer to the struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
