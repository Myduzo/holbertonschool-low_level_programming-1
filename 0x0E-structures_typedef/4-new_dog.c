#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Description: Look up man strlen for reference
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;
	int count;

	for (count = 0; s[count] != '\0'; count++)
		len++;
	return (len);
}

/**
 * new_dog - function that creates a new struct
 * @name: char type
 * @age: float type
 * @owner: char type
 * Description: 4. A door is what a dog is perpetually on the wrong side of
 * Return: see below
 * 1. upon success, returns pointer to allocated memory
 * 2. upon fail, returns NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i1, i2;
	/**
	 * 1. allocate memory for struct and its elements
	 * 2. use _strlen to get the size
	 * 3. free allocated memory where makes sense
	 * 4. return NUll if fail
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
	/**
	 * 1. if struct was successfully created
	 * 2. store a copy of name, owner and age into it
	 * 3. free allocated memory
	 */
	if (ptr)
	{
		for (i1 = 0; name[i1] != '\0'; i1++)
			ptr->name[i1] = name[i1];
		for (i2 = 0; owner[i2] != '\0'; i2++)
			ptr->owner[i2] = owner[i2];
		ptr->name[i1] = '\0';
		ptr->owner[i2] = '\0';
		ptr->age = age;
	}
	return (ptr);
}
