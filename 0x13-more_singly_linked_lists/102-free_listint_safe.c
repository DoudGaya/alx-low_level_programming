#include "lists.h"

/**
 * free_listp2 - free link list
 *
 * @head: first node
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;

	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tmp = curr) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}


/**
 * free_listint_safe - free list
 *
 * @h: first node
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)

{

	size_t nnods = 0;

	listp_t *hptr, *new, *add;

	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
		{
			exit(98);
		}

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;
		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnods);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnods++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (nnods);
}
