#include "lists.h"


/**
 * add_nodeint - add a node
 * @head: param
 * @n: param
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
/**
 * reverse_listint - reverse a list
 * @head: param
 * Return: a ptr
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h2;
	listint_t *t;

	h2 = NULL;

	if (*head != NULL || head != NULL)
	{
		return (NULL);
	}

	t = *head;
	while (t)
	{
		add_nodeint(&h2, t->n);
		t = t->next;
	}
	*head = h2;
	return (*head);
}
