#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that intialize the variable of type struct dog
 * @d: pointer
 * @name: character
 * @age: float
 * @owner: character
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
