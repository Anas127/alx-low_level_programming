#include "lists.h"

/**
 * pop_listint - deletes head of a list
 * @head: param
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int donnee;
	listint_t *t;

	if (head == NULL || *head == NULL)
		return (0);
	t = *head;
	*head = (*head)->next;
	donnee = t->n;
	free(t);
	return (donnee);
}


