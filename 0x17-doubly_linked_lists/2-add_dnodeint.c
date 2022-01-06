#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a linked list
 * @head: pointer to pointer of the first node
 * @n: date of the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	if (*head == NULL)
	{
		ptr->n = n;
		ptr->next = NULL;
		ptr->prev = NULL;
		*head = ptr;
		return (ptr);
	}

	(*head)->prev = ptr;
	ptr->n = n;
	ptr->next = *head;
	ptr->prev = NULL;
	*head = ptr;

	return (ptr);

}
