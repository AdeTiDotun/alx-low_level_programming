#include <stdio.h>

/**
 * main- This program prints numbers 0 - 9, using the putchar function.
 * Return: Always (0) Success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
