#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a list
 * @head: Pointer to the beginning of a list
 * @n: number to add to the node
 * Return: A pointer to the beginning of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		listint_t *lastnode = *head;

		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = new_node;
	}

	return (new_node);
}
