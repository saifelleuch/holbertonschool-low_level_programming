#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the first node
 * @index: is the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i;

	i = 0;
	while (i != index && head != NULL)
	{
		head = head->next;
		i++;
	}

	return (head);

}
