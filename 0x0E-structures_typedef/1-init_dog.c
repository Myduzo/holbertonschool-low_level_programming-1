#include "dog.h"

/**
 * init_dog - function that initializes a variable
 * @d: pointer to struct dog
 * @name: char type
 * @age: float type
 * @owner: char type
 * Description: There are three ways to initialize a struct:
 * 1. Define a variable and initialize in {}
 * 2. Define a variable and use designated initializers, .
 * 3. Define a variable and set as equal to
 * Return: N/A
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

