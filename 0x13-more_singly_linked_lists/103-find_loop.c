#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *help;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tmp = head->next;
	help = (head->next)->next;

	while (help)
	{
		if (tmp == help)
		{
			tmp = head;

			while (tmp != help)
			{
				tmp = tmp->next;
				help = help->next;
			}

			return (tmp);
		}

		tmp = tmp->next;
		help = (help->next)->next;
	}

	return (NULL);
}
