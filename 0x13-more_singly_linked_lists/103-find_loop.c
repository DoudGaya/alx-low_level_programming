#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 * Return: the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{

	listint_t *point;

	listint_t *last;

	point = head;

	last = head;

	while (head && point && point->next)

	{

		head = head->next;

		point = point->next->next;

		if (head == point)
		{
			head = last;
			last =  point;
			while (1)
			{
				point = last;
				while (point->next != head && point->next != last)
				{
					point = point->next;
				}
				if (point->next == head)
				{
					break;
				}

				head = head->next;
			}
			return (point->next);
		}
	}
	return (NULL);
}
