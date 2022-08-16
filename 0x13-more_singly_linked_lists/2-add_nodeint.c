#include "lists.h"

/**
 * add_nodeint - add new node at 1st position
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 * Return: address of new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
	{
		return (NULL);
	}
	add->n = n;
	add->next = *head;
	*head = add;
	return (*head);
}
