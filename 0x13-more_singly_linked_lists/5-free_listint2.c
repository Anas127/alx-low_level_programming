#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: param
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}

	*head = NULL;
}
