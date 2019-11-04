#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
  /* declare iteration variable */
  int iterate = 0;
  /* if there's a head */
  while (h)
    {
      /* move to the next node */
      h = h->next;
      /* iterate through list */
      iterate++;
    }
  /* return the number of nodes */
  return (iterate);
}
