#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer to the first node
 * @str: string - (malloc'ed string)
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);

}
