#include "lists.h"

/**
 * free_listp2 - free linked list
 *
 * @head: first node
 *
 * Return: no return.
 */

void free_listp2(listp_t **head)
{
	listp_t *tmp;

	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
		}
}

/**
 * free_listint_safe - freelinked list.
 *
 * @h: first node
 *
 * Return: size of list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nods = 0;

	listp_t *stps, *new, *add;

	listint_t *current;

	stps = NULL;

	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
		{
			exit(98);
		}
		new->p = (void *)*h;
		new->next = stps;
		stps = new;
		add = stps;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			}
				*h = NULL;
				free_listp2(&stps);
				return (nods);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		nods++;
	}
	*h = NULL;
	free_listp2(&stps);
	return (nods);
}
