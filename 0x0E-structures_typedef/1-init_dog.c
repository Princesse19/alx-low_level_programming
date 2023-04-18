#include <stdio.h>
#include "dog.h"

/**
 * init_dog - This initializes a struct dog
 * @d: This is a pointer to struct dog to initialize
 * @name: This is name of the dog
 * @age: This is age of the dog
 * @owner: This is the owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
