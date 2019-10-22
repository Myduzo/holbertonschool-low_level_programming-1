#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 * @s: characters
 * Description: Look up man strlen for reference
 * Return: Always 0 is success
 */
int _strlen(char *s)
{
	int len = 0;
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	return (len);
}

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
	/* declare iteration variables */
	int i1, i2;
	/**
	 * allocate memory for struct and its members
	 * use _strlen to get the size
	 * free allocated memory where makes sense
	 * return NUll if fail
	 */
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	/* store a copy of name & owner */
	for (i1 = 0; name[i1] != '\0'; i1++)
		ptr->name[i1] = name[i1];
	for (i2 = 0; owner[i2] != '\0'; i2++)
		ptr->owner[i2] = owner[i2];
	/* point to age */
	ptr->age = age;
	/* return pointer to allocated memory */
	return (ptr);
}
