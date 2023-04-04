#include <stdio.h>
#include "list.h"

/**
 * print_list: Prints the elements in a node
 * @h: Head of the singly linked list
 * Return: The number of nodes of the singly linked list
 */

size_t print_listint(const listint_t *h)
{
	int num_node = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf ("%d\n", h->n);
			h = h->next;
			num_node++;
		}
	}
	return(num_node);
}
