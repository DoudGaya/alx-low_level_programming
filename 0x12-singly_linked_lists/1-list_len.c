#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list
 * @h: list_t list
 * Return: number of nodes
 *
 */

size_t list_len(const list_t *h)

{

	size_t lem;

	lem = 0;

	while (h != NULL)
	{
		h = h->next;
		lem++;
	}
	return (lem);
}
