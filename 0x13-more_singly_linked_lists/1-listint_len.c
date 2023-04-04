#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Calculates the length of a list
 * @h: Pointer to the begining of the list
 * Return: Returns the amount of nodes
 */

size_t listint_len(const listint_t *h)
{
	int node;

	for (node = 0; h != NULL; node++)
	{
		h = h->next;
	}

	return (node);
}
