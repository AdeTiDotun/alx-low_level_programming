#include <stdio.h>
/**
 * main- This program prints numbers in base 16.
 * Return: Always (0) Success
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0 ; num <=9 ; num++)
		putchar(num);
	for (letter = 'A' ; letter <= 'F' ; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
