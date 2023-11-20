#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: a pointer to the head node
 * @value: the integer value to store
 *
 * Return: pointer to the new head, else NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int value)
{
	listint_t *tail, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}

	return (new_node);
}
