#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints
 * @d: pointer to struct dog
 * Description: Print the elements of a struct
 * Return: N/A
 */
void print_dog(struct dog *d)
{
	/* if d is NULL, print nothing */
	if (d == NULL)
	{
		printf("\n");
	}
	/* if elements of d is NULL, print nil */
	if (d->name == NULL || d->owner == NULL)
	{
		printf("Name: (nil)");
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
