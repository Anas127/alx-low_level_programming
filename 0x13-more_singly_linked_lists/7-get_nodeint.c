#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of a list
 * @head: param
 * @index: param
 * Return: ptr to node NULL if node doest not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	for (i = 0; node != NULL && i < index; i++)
		node = node->next;
	return (node);
}
