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
	/* declare variable to print nothing */
	char *print = NULL;
	/* if d is NULL, print nothing */
	if (d == NULL)
	{
		printf("%s\n", print);
	}
	else
	{/* print Name */
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		/* print Age */
		if (d->age)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}
		/* print Owner */
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
