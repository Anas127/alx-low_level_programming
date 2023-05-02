#include "lists.h"

/**
 * free_listint - frees a list
 * @head: param
 */

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
