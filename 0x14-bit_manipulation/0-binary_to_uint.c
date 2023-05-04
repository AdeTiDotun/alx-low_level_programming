#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	int len, power;
	unsigned int val = 0;
	/* val is the value to be returned */

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, val = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			val += power;
	}

	return (val);
}
