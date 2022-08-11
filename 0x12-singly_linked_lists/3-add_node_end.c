#include "lists.h"

/**
 * add_node_end - adds a new_n node at the end of a list_t list
 * @head: list_t list
 * @str: string to add
 * Return: address of new_n node
 */

list_t *add_node_end(list_t **head, const char *str)

{

	list_t *new_n, *temp;

	size_t charr;

	new_n = malloc(sizeof(list_t));

	if (new_n == NULL)

	{
		return (NULL);
	}
	new_n->str = strdup(str);

	for (charr = 0; str[charr]; charr++)

	{ ; }

	new_n->len = charr;

	new_n->next = NULL;

	temp = *head;

	if (temp == NULL)

	{ *head = new_n; }

	else

	{

		while (temp->next != NULL)

		{ temp = temp->next; }

		temp->next = new_n;
	}
	return (*head);
}
