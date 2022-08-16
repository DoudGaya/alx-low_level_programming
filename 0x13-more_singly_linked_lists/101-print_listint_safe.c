#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *point;

	listint_t *nod;

	point = NULL;

	nod = NULL;

	while (*head != NULL)
	{
		nod = (*head)->next;
		(*head)->next = point;
		point = *head;
		*head = nod;
	}
	*head = point;
	return (*head);
}
