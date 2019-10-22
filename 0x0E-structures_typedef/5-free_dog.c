#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function that frees allocated memory
 * @d: pointer to struct
 * Description: Free allocated memory
 * Return: NULL if fail
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
