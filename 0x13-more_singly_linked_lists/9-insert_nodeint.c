#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: params
 * @idx: index of the list where the new node is
 * @n: integer element.
 * Return: the address of the new node, or NULL if it
 * failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *neu;

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
	neu = malloc(sizeof(listint_t));
	if (neu == NULL)
	{
		return (NULL);
	}
	neu->n = n;
	if (idx == 0)
	{
		neu->next = *head;
		*head = neu;
	}
	else
	{
		neu->next = h->next;
		h->next = neu;
	}
	return (neu);
}
