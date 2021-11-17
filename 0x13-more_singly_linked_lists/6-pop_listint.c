#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{

	listint_t *x;
	int a;

	if (head == NULL)
		return (0);

	x = *head;

	a = x->n;
	x = x->next;
	free(*head);
	*head = x;
	if (head == NULL)
		return (0);
	return (a);

}
