#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a linked list
 *
 * @head: params head of a list.
 *
 * @index: index of list
 *
 * Return: head of a list.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

	int i;

	for (i = 0; i < index && head != NULL; i++)

	{

		head = head->next;

	}

	return (head);

}

