#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to pointer to the first node
 * @str: string - (malloc'ed string)
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *last;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	last = *head;
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = ptr;

	return (ptr);




}
