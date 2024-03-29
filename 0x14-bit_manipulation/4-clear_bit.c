#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: The number to modify
 * @index: The index in the number to modify
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	*n &= ~(1 << index);
	return (1);
}
