#include "lists.h"



/**
 * reverse_listint - reverse a list
 * @head: param
 * Return: a ptr
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	if (!head || !*head)
	{
		return (NULL);
	}
	if (!(*head)->next)
		return (*head);
	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);

}
