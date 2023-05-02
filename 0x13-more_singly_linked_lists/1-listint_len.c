#include "lists.h"

/**
 * listint_len - returns number of elemtns in a list
 * @h: param
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
