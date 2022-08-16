#include "lists.h"

/**
 * insert_nodeint_at index - inserts a new node
 * @head: params head
 * @idx: index of the list
 * @n: integer element.
 * Return: the address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *nw;

	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
	{
		return (NULL);
	}
	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->n = n;
	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
	}
	else
	{
		nw->next = h->next;
		h->next = nw;
	}
	return (nw);
}
