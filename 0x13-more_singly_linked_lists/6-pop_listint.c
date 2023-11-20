#include "lists.h"

/**
 * pop_listint - pops the the head node and returns it's data
 * @head: pointer to the head node
 *
 * Return: data stored in the popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;

	data = tmp->n;

	free(tmp);
	tmp = NULL;

	return (data);
}
