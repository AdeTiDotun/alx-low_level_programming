#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	if  (b == NULL)
		return (0);
	size_t len = strlen(b);
	unsigned int total = 0;

	for (size_t i = o; i < len; i++)
	{
		char c = b[i];
	if (c != '0' && c != '1')
		return (0);

	total = (total << 1) + (c - '0');
	}
	return (total);
}
