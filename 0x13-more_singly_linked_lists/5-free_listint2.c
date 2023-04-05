#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a list of nodes, and sets the head to NULL
 * @head: Pointer to the first element of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL && *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		*head = tmp;
		free(*head);
	}
	free(*head);
	*head = NULL;
}
