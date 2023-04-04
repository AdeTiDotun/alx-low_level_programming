#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: The head of the linked list
 * Return: The number of nodes of the linked list
 */

size_t print_listint(const listint_t *h)
{
	int node;

	if (h == NULL)
	{
		return (0)
	}
	for (node = 0; h != NULL; node++)
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}	
