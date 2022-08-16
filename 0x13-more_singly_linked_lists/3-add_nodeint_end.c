#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;

	listint_t *tmp;

	(void)tmp;

	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
	{
		return (NULL);
	}
	nw->n = n;
	nw->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = nw;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nw;
	}
	return (*head);
}
