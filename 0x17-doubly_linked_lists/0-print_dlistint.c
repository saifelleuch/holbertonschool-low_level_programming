#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h: pointer of the first node
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);

}
