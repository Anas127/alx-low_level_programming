#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: param
 * Return: size of list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *t;
	listint_t *node;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	node = *h;

	while (node != NULL)
	{
		size++;
		if (node->next >= node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}

		t = node;
		node = node->next;
		free(t);
	}
	*h = NULL;
	return (size);
}
