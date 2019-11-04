#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
  /* declare iteration variable */
  int i = 0;
  /* if pointer is not at NULL */
  /* then, iterate through list */
  while (h)
    {
      /* if pointer is at NULL */
      /* then, print nil */
      if (!(h->n))
	{
	  printf("(nil)");
	}
      else
	{
	  /* print after iteration */
	  printf("%d", h->n);
	}
      /* move pointer */
      h = h->next;
      /* print new line after printing the elements */
      printf("\n");
      /* iterate through list */
      i++;
    }
  /* return the number of nodes */
  return (i);
}
