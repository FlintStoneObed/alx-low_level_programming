#include "lists.h"

/**
 * print_listint - prints all the elements in a linked list
 * @head: the head node
 *
 * Return: number of nodes in the linked list
 */

size_t print_listint(const listint_t *head)
{
	size_t node_count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		printf("%d\n", head->n);
		node_count++;
		head = head->next;
	}
	return (node_count);
}
