#include "lists.h"

/**
 * find_listint_loop - a function
 * @head: param
 * Return: address
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s;
	listint_t *f;

	f = head;
	s = head;

	while (f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (s);
		}
	}
	return (NULL);
}
