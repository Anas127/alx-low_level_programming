#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints elements of a list
 * @h: param
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}

