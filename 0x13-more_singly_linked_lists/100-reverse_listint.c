#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: param
 * Return: a ptr
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *node;
	listint_t *next;

	node = *head;
	prev = NULL;
	next = NULL;

	while (node != NULL)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}

	*head = prev;
	return (*head);
}
