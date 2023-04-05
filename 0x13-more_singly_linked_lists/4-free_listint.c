#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a list of nodes
 * @head: Pointer to the first element of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp; /*tmp is the temporary node*/

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
