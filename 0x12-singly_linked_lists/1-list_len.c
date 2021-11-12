#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: pointer to the first node
 * Return: the number of nodes
 */


size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
