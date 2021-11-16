#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: pointer to pointer on the first node
 * @idx: s the index of the list where the new node should be added.
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *ptr, *new, *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	ptr = *head;

	i = 1;
	while (i != idx && head != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	new->n = n;
	temp = ptr;
	temp = temp->next;
	ptr->next = new;
	new->next = temp;

	return (new);

}
