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
	listint_t *current;

	prev = NULL;
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
