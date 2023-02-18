#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- This program will assign a random number to a variable
 * return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("is negative");
	else
		printf("is zero");

	return (0);
}
