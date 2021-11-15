#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: @head: pointer to pointer to the first node
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *last, *new;

	last = malloc(sizeof(listint_t));
		if (last == NULL)
			return (NULL);
	last->n = n;
	last->next = NULL;
	new = *head;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}


	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = last;

	return (last);

}
