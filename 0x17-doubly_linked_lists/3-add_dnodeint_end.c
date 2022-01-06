#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list.
 * @head: pointer to pointer to the first node
 * @n: date of the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *last;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);

	if (*head == NULL)
	{
		ptr->prev = NULL;
		ptr->n = n;
		ptr->next = NULL;
		(*head) = ptr;
		return (ptr);
	}

	last = *head;
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = NULL;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = ptr;
	ptr->prev = last;

	return (ptr);
}
