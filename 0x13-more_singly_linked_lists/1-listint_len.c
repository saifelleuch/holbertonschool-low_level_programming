#include "lists.h"

size_t listint_len(const listint_t *h)
{

	int i;

	if ( h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);

}
