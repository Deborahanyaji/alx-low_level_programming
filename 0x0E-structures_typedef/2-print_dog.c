#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("name:");
		d->name == NULL ? printf("(Nil)\n") : printf("%s\n", d->name);
		printf("Age : ");
		printf("%f\n", d->age);
		printf("Owner : ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
