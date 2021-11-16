#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp, *first;
	unsigned int i;

	ptr = *head;
	i = 1;
	while (i != index && ptr->next != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	temp = ptr;
	temp = temp->next;
	first = *head;
	while (first->next != ptr)
		first = first->next;
	first->next = temp;


	free(ptr->next);
	free(ptr);

	return (1);

}
