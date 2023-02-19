#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- Prints single number 0 - 9
 * Return: Alwyas (0) Success
 */

int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);

		putchar(' ');
		putchar(',');
	}

	putchar('\n');

	return (0);
}
