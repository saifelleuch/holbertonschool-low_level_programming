#include "lists.h"

/**
 * print_list - function to print all the elements of a list_t list.
 * @h: pointer to the first node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{

	int i;

	if (h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);

}
