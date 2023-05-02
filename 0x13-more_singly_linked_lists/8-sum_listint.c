#include "lists.h"

/**
 * sum_listint - returns the sum of data of a list
 * @head: param
 * Return: sum of data or 0 if list empty
 */

int sum_listint(listint_t *head)
{
	int count = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		count = count + node->n;
		node = node->next;
	}
	return (count);
}
