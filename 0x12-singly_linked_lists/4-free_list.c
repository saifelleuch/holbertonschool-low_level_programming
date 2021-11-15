#include "lists.h"

/**
 * free_list - function function that frees a list_t list.
 * @head: pointer to the first node
 */

void free_list(list_t *head)
{

	list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
