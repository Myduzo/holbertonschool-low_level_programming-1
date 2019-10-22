#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - function that creates a new dog
 * @name: char type
 * @age: float type
 * @owner: char type
 * Description: Define new type
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* declare pointer to struct */
	dog_t *ptr;

	/* allocate memory for struct */
	ptr = (dog_t *)malloc(sizeof(dog_t));

	/* store a copy of each element */
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	/* if malloc fails, return null */
	/* if success, return pointer */
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
