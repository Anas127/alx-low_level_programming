#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strlength - returns length
 * @str: param
 * Return: length
 */

int strlength(const char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

/**
 * add_node - adds a new node
 * @head:param
 * @str: param
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlength(str);
	node->next = *head;
	*head = node;
	return (node);
}
