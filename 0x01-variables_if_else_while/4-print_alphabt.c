#include <stdio.h>
/**
 * main- This program prints alphabets in lower case, with exemption to q and e
 * Return: Always (0) Success
 */

int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}

	putchar('\n');

	return (0);
}
