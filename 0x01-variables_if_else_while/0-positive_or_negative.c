#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program to assign random number to n on execution
 * checking if it is positive or negative
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n==0)
		printf("%d is zero\n", n);
	else if (n>0)
		printf("%d is positive\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
