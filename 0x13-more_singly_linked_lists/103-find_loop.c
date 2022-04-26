#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p = head;
	listint_t *q = head;

	if (!head)
		return (NULL);

	while (p && q->next)
	{
		q = q->next->next;
		p = p->next;
		if (q == p)
		{
			p = head;
			while (p != q)
			{
				p = p->next;
				q = q->next;
			}
			return (q);
		}
	}

	return (NULL);
}
