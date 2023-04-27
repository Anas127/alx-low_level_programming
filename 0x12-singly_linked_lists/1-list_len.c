#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: param
 * Return: number of elemtns
 */

size_t list_len(const list_t *h)
{
	int length;

	length = 0;
	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
