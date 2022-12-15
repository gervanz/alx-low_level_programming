#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print Fibonacci even numbers less than 4x10**6
 * starting with 1 & 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	printf("%ld, %ld", fib[0], fib[1]);

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];

		if (fib[i] > 4000000)
			break;
		else if (fib[i] % 2 == 0)
			printf(", %ld", fib[i]);
	}

	printf("\n");

	return (0);
}
