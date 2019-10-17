#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - function that allocates memory
 * @nmemb: array of nmemb elements...
 * @size: of size bytes each
 * Description: Lookup man calloc 
 * Return: NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{	
	/* declare temporary pointer */
	void *block;
	/* declare variable for the amount of bytes to reserve */
	unsigned int fullsize;
	
	/* if elements or bytes are 0, return NULL */
	if (!nmemb || !size)
		return (NULL);
	/* the amount of bytes to reserve */
	fullsize = nmemb * size;
	/* if there's size overflow, return NULL */
	if (size != (fullsize / nmemb))
		return (NULL);
	/* allocate memory */
	block = malloc(fullsize);
	/* if malloc fails, return NULL */
	if (!block)
		return (NULL);
	/* return point to allocated memory */
	/* used memset to set memory to 0 */
	/* cast char to void */
	return ((void *)_memset(block, 0, fullsize));
}
